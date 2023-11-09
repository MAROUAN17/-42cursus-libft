/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:52:13 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/09 10:22:50 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>

char	*allocation(char *p, size_t start, size_t end)
{
	if (start <= end)
		p = malloc((sizeof(char) * (end - start)) + 1);
	else
		p = malloc(sizeof(char));
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = 0;
	p = NULL;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]) != 0) 
		start++;
	while (end > 0 && ft_strchr(set, s1[end - 1]) != 0) 
		end--;
	p = allocation(p, start, end);
	if (!p)
		return (NULL);
	while (start < end)
		p[i++] = s1[start++];
	p[i] = '\0';
	return (p);
}

// int main() {
// 	char s1[] = "####!!!AABCCC!!#####";
// 	char set[] = "#!";
// 	printf("Original: %s\n", s1);
// 	printf("Trimmed: %s\n", ft_strtrim(NULL, "ewfew"));

// 	return 0;
// }
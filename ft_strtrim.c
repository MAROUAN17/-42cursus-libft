/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:52:13 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/03 20:55:58 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	char	*str;
	char	*p;

	i = 0;
	len = ft_strlen(s1);
	str = (char *)s1;
	if (str == 0 || set == 0) 
		return (0);
	while (len > 0 && ft_strchr(set, str[0]) != 0) 
	{
		ft_memmove(str, str + 1, len - 1);
		len--;
	}
	while (len > 0 && ft_strchr(set, str[len - 1]) != 0) 
	{
		str[len - 1] = '\0';
		len--;
	}
	p = malloc((sizeof(char) * ft_strlen(str)));
	while (str[i++])
		p[i] = str[i];
	return (p);
}

/*int main() {
	char s1[] = "###!!teeeest!!###";
	char set[] = "#!";
	
	printf("Original: %s\n", s1);
	ft_strtrim(s1, set);
	printf("Trimmed: %s\n", s1);

	return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:45:57 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/05 13:35:36 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <unistd.h>
// #include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	z;
	char	*p;

	i = 0;
	z = 0;
	p = malloc(sizeof(char) * len + 1);
	while (s[start])
	{
		p[z] = s[start];
		start++;
		z++;
	}
	p[z] = '\0';
	return (p);
}

// int main()
// {
// 	char s1[] = "teeeeeeest";
// 	printf("%s\n", ft_substr(s1, 1, 3));
// 	return 0;
// }
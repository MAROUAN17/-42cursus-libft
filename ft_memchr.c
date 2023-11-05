/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:36:26 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/05 14:10:25 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			p += i;
			while (p[i])
				i++;
			return (p);
		}
		else
			i++;
	}
	return (0);
}

// int main()
// {
// 	int s[] = {300,2,3,4,5};
// 	printf("%s\n", ft_memchr(s, 300, 10));
// 	printf("%s\n", memchr(s, 300, 10));
// 	return 0;
// }

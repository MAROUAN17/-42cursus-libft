/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:57:29 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/04 13:30:06 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, 
			size_t dstsize)
{
	size_t	i;
	char	*dest;
	char	*sr;

	i = 0;
	dest = (char *)dst;
	sr = (char *)src;
	while (i + 1 < dstsize && sr[i])
	{
		dest[i] = sr[i];
		i++;
	}
	if (dstsize != 0)
		dest[i] = '\0';
	i = 0;
	while (sr[i])
		i++;
	return (i);
}

/*int main()
{
	char dest[] = "test";
	char src[] = "";
	printf("%zu\n" , ft_strlcpy(dest, src, 4));
	printf("%zu\n" , strlcpy(dest, src, 4));
	return 0;
}*/
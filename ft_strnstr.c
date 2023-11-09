/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:17:50 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/09 10:15:45 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	increment_i(size_t z, size_t *p_i)
{
	if (z == 0)
		(*p_i)++;
	else
	{
		if (z == 2)
			(*p_i) += z - 1;
		else
			(*p_i) += z;
	}
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	z;

	i = 0;
	z = 0;
	if (!haystack && needle && len == 0)
		return (NULL);
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] && i + ft_strlen(needle) <= len)
	{
		while (z < ft_strlen(needle) && haystack[i + z] == needle[z])
			z++;
		if (z == ft_strlen(needle))
			return ((char *)(haystack + i));
		increment_i(z, &i);
	}
	return (0);
}

// int main()
// {    
// 	printf("%s\n", ft_strnstr("dasdasd", NULL, 0));
// 	// printf("%s\n", strnstr("dasdasd", NULL, 0));
// 	return 0;    
// }
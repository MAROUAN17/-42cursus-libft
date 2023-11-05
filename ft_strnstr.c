/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:17:50 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/05 10:54:53 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	z;

	i = 0;
	z = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] && i + ft_strlen(needle) <= len)
	{
		while (z < ft_strlen(needle) && haystack[i + z] == needle[z])
			z++;
		if (z == ft_strlen(needle))
			return ((char *)(haystack + i));
		if (z == 0)
			i++;
		else
		{
			if (z == 2)
				i += z - 1;
			else
				i += z;
		}
	}
	return (0);
}

/*int main()
{    
	printf("%s\n", ft_strnstr("aaabcabcd", "aabc", -1));
	return 0;    
}*/
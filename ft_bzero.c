/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:51:44 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/04 10:33:54 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	return (ft_memset(s, 0, n));
}

/*int main()
{
	char str[] = "test";
	char str2[] = "test";
	printf("%s\n", ft_bzero(str2, 2));
	printf("%s\n", bzero(str, 2));
	return 0;
}*/

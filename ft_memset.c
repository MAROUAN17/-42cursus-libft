/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:50:16 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/08 15:54:28 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
// #include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)b;
	while (i < len)
	{
		*(p + i) = c;
		i++;
	}
	return (b);
}

// int main()
// {
// 	int a = 0;
// 	ft_memset(&a, 199, 1);
// 	ft_memset(((char *)(&a)) + 1, 250, 1);
// 	ft_memset(((char *)(&a)) + 2, 255, 1);
// 	ft_memset(((char *)(&a)) + 3, 255, 1);
// 	printf("%d\n", a);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:50:16 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/04 10:11:57 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

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

/*int main()
{
	int ints[] = {42};
	ft_memset(ints, 5, 2);
	ft_memset(ints, 57,1);
	printf("%d\n", ints);
}*/

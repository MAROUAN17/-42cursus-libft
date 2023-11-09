/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:55:29 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/08 10:38:46 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <unistd.h>
// #include <stdio.h>
// #include <stdlib.h>

int	check_m(const char *str, size_t *ptr_i)
{
	size_t	i;
	size_t	m;

	i = 0;
	m = 1;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13)) 
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			m = -m;
		i++;
	}
	*ptr_i = i;
	return (m);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	m;
	int		res;

	res = 0;
	m = check_m(str, &i);
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * m);
}

// int main()
// {
// 	printf("%d\n", ft_atoi("b124"));
// 	printf("%d\n", atoi("b124"));
// 	return 0;
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:36:37 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/03 20:20:39 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	word_len(int n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(char *p, int n, int *i)
{
	if (n > 10)
		ft_putnbr(p, n / 10, i);
	p[*i] = (n % 10) + '0';
	(*i)++; 
}

char	*ft_itoa(int n)
{
	int		i;
	size_t	z;
	size_t	length;
	char	*p;

	i = 0;
	z = 0;
	length = word_len(n);
	p = malloc((sizeof(char) * length) + 1);
	ft_putnbr(p, n, &i);
	p[length] = '\0';
	return (p);
}

/*int main()
{   
	printf("%s\n" , ft_itoa(42));
	return 0;
}*/
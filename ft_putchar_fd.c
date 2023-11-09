/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:19:52 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/08 20:23:16 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
// #include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

// int main()
// {
// 	int fd = open("test", O_CREAT | O_RDWR);
// 	ft_putchar_fd('c', fd);
// 	printf("%d", fd);
// 	return 0;
// }
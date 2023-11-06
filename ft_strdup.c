/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:20:20 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/05 16:14:19 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*p;

	i = 0;
	p = malloc(sizeof(char) * strlen(s1) + 1);
	if (!p)
		return (0);
	while (i < strlen(s1) + 1)
	{
		p[i] = s1[i];
		i++;
	}
	return (p);
}

/*int main()
{
	char s1 = "test";
	printf("%d\n", ft_strdup(s1));
	return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:55:32 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/03 16:33:48 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

size_t	count_words(char const *s, char const c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		counter++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	z;
	size_t	x;
	char	**p;

	i = 0;
	z = 0;
	x = 0;
	p = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (s[0] == c)
		i++;
	while (z < count_words(s, c))
	{
		p[z] = (char *)malloc(sizeof(char) * (count_words(s, c) + 1)); 
		while (s[i] && s[i] != c)
			p[z][x++] = s[i++];
		while (s[i] && s[i] == c)
			i++;
		if (z == count_words(s, c) - 1)
			p[z][x] = '\0';
		x = 0;
		z++;
	}
	p[z] = 0;
	return (p);
}

/*int main()
{
	size_t i = 0;
	char str[] = "teeest";
	char c = 'e'; 
	char **arr;
	arr = ft_split(str, c);
	while(arr[i])
	{
		printf("arr[%zu] => %s\n", i, arr[i]);
		i++;
	}

	return 0;
}*/
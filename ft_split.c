/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:05:45 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/06 11:27:24 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
// #include <stdio.h>

size_t	count_words(char const *s, char const c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			counter++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (counter);
}

size_t	word_len(char const *s, char c, size_t i)
{
	size_t	x;

	x = 0;
	while (s[i] && s[i] != c)
	{
		x++;
		i++;
	}
	return (x);
}

void	*freeing_memory(char **p, size_t z)
{
	while (z > 0)
	{
		--z; 
		free(p[z]);
	}
	free(p);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	z;
	size_t	j;
	char	**p;

	i = 0;
	z = 0;
	p = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!p)
		return (0);
	while (z < count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		p[z] = (char *)malloc(word_len(s, c, i) + 1);
		if (!p[z])
			return (freeing_memory(p, z));
		j = 0;
		while (s[i] && s[i] != c)
			p[z][j++] = s[i++];
		p[z++][j] = '\0';
	}
	p[z] = 0;
	return (p);
}

// int main()
// {
//     size_t i = 0;
//     char str[] = "dewfewewfew,,fewf,ew,e,few,fewf,ewf";
//     char c = ',';
//     char **arr;
//     arr = ft_split(str, c);
//     while (arr[i])
//     {
//         printf("arr[%zu] => %s\n", i, arr[i]);
//         i++;
//     }
//     return 0;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:15:50 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/07 14:45:53 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	current = *lst;
	while (current != 0)
	{
		temp = current;
		current = current->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}

// void  del(void *node)
// {
//   printf("function");
// }

// int main()
// {
//   t_list *node1 = malloc(sizeof(t_list));
//   t_list *node2 = malloc(sizeof(t_list));
//   int data1 = 12;
//   int data2 = 9;
//   node1->content = &data1;
//   node1->next = node2;
//   node2->content = &data2;
//   node2->next = NULL;
//   ft_lstclear(&node1, &del);
// }
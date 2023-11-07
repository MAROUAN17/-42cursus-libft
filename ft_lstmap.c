/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:29:13 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/07 18:55:16 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>

void	*check_allocation(t_list *newL, t_list *temp, void (*del)(void *))
{
	while (newL != NULL)
	{
		temp = newL;
		newL = newL->next;
		del(temp->content);
		free(temp);
	}
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*newl;
	t_list	*newtail;
	t_list	*newnode;
	t_list	*temp;

	newl = NULL;
	newtail = NULL;
	current = lst;
	temp = NULL;
	while (current != NULL)
	{
		newnode = (t_list *)malloc(sizeof(t_list));
		if (!newnode)
			return (check_allocation(newl, temp, del));
		newnode->content = f(current->content);
		newnode->next = NULL;
		if (newl == NULL)
			newl = newnode;
		else
			newtail->next = newnode;
		newtail = newnode;
		current = current->next;
	}
	return (newl);
}

// void *f(void *content)
// {
//     int *data = (int *)malloc(sizeof(int));
//     *data = *(int *)content;
//     return data;
// }

// void del(void *content)
// {
//     free(content);
// }

// int main()
// {
//     t_list *node1 = malloc(sizeof(t_list));
//     t_list *node2 = malloc(sizeof(t_list));

//     int value1 = 1;
//     int value2 = 2;

//     node1->content = &value1;
//     node1->next = node2;
//     node2->content = &value2;
//     node2->next = 0;

//     t_list *newList = ft_lstmap(node1, &f, &del);
//     t_list *current = newList;
//     while (current != NULL)
//     {
//         int *data = (int *)current->content;
//         if (data != NULL)
//         {
//             printf("Value: %d\n", *data);
//         }
//         current = current->next;
//     }

//     return 0;
// }
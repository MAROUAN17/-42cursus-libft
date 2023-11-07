/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:54:57 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/07 17:11:00 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*newn;

	newn = (t_list *)malloc(sizeof(t_list));
	if (!newn)
		return (NULL);
	newn->content = content;
	newn->next = (0); 
	return (newn);
}

// void    printf_linked_l(t_list *head)
// {
//     t_list *current = head;
//     while(current != 0)
//     {
//         int *data = (int *)current->content;
//         printf("%d\n", *data);
//         current = current->next;
//     }
//     printf("NULL\n");
// }
// int main()
// {
//     int data = 42;
//     t_list *newNode = ft_lstnew(&data);
//     printf("New Node: ");
//     printf_linked_l(newNode);
//     return (0);
// }
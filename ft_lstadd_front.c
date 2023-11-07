/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:12:40 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/07 14:44:41 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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

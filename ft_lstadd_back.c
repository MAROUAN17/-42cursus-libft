/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maglagal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:43:11 by maglagal          #+#    #+#             */
/*   Updated: 2023/11/07 18:52:53 by maglagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (*lst == NULL || new == NULL)
	{
		*lst = new;
		new->next = NULL;
	}
	else
	{
		current = *lst;
		while (current->next != 0)
			current = current->next;
		current->next = new;
	}
}

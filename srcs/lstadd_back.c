/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 13:49:25 by tholzheu          #+#    #+#             */
/*   Updated: 2019/05/18 20:27:42 by tholzheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		lstadd_back(t_list **head, char *data)
{
	t_list	*current;
	t_list	*new;

	if (!head)
		return ;
	new = lstnew(data);
	if (!*head)
	{
		*head = new;
		return ;
	}
	current = *head;
	while (current && current->next)
		current = current->next;
	current->next = new;
}

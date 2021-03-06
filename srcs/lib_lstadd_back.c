/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_lstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:37:02 by tholzheu          #+#    #+#             */
/*   Updated: 2019/05/23 16:38:07 by tholzheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		lib_lstadd_back(t_liblist **head, char *data)
{
	t_liblist	*current;
	t_liblist	*new;

	if (!head)
		return ;
	new = lib_lstnew(data);
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

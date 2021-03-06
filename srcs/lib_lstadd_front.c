/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_lstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:37:09 by tholzheu          #+#    #+#             */
/*   Updated: 2019/05/23 16:38:07 by tholzheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	lib_lstadd_front(t_liblist **head, char *data)
{
	t_liblist	*tmp;
	t_liblist	*new;

	if (!head)
		return ;
	new = lib_lstnew(data);
	if (!*head)
		*head = new;
	else
	{
		tmp = new;
		tmp->next = *head;
		new = *head;
		*head = tmp;
	}
}

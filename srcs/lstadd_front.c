/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 13:54:25 by tholzheu          #+#    #+#             */
/*   Updated: 2019/05/23 16:26:44 by tholzheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	lstadd_front(t_liblist **head, char *data)
{
	t_liblist	*tmp;
	t_liblist	*new;

	if (!head)
		return ;
	new = lstnew(data);
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

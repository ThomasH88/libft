/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 13:58:13 by tholzheu          #+#    #+#             */
/*   Updated: 2019/05/18 20:27:42 by tholzheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*delete_list(t_list **head)
{
	t_list		*current;
	t_list		*tmp;

	if (!head)
		return (NULL);
	current = *head;
	while (current)
	{
		tmp = current->next;
		ft_strdel(&(current->data));
		free(current);
		current = NULL;
		current = tmp;
	}
	return (NULL);
}

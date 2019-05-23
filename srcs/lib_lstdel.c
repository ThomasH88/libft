/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_lstdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:37:18 by tholzheu          #+#    #+#             */
/*   Updated: 2019/05/23 16:37:34 by tholzheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_liblist	*lib_lstdel(t_liblist **head)
{
	t_liblist		*current;
	t_liblist		*tmp;

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

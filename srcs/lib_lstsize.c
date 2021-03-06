/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_lstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:37:55 by tholzheu          #+#    #+#             */
/*   Updated: 2019/05/23 16:38:07 by tholzheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		lib_lstsize(t_liblist **head)
{
	t_liblist	*current;
	int			count;

	count = 0;
	if (!head || !*head)
		return (0);
	current = *head;
	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}

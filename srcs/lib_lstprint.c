/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_lstprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:37:49 by tholzheu          #+#    #+#             */
/*   Updated: 2019/05/23 16:38:07 by tholzheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	lib_lstprint(t_liblist **head)
{
	t_liblist	*current;

	if (!head || !*head)
		return ;
	current = *head;
	while (current)
	{
		ft_putstr(current->data);
		ft_putchar('\n');
		current = current->next;
	}
}

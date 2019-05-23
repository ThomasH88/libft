/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 15:19:30 by tholzheu          #+#    #+#             */
/*   Updated: 2019/05/23 16:26:44 by tholzheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	lstprint(t_liblist **head)
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

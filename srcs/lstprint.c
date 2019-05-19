/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 15:19:30 by tholzheu          #+#    #+#             */
/*   Updated: 2019/05/18 20:27:42 by tholzheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	lstprint(t_list **head)
{
	t_list	*current;

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

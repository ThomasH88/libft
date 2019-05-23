/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 13:47:25 by tholzheu          #+#    #+#             */
/*   Updated: 2019/05/23 16:31:13 by tholzheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_liblist	*lib_lstnew(char *s)
{
	t_liblist			*new;

	if ((new = (t_liblist *)malloc(sizeof(t_liblist))) == NULL)
		return (NULL);
	new->data = s;
	new->next = NULL;
	return (new);
}

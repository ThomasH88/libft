/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 20:22:15 by tholzheu          #+#    #+#             */
/*   Updated: 2019/05/18 20:27:42 by tholzheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char			*ft_strstr(const char *h, const char *n)
{
	size_t		i;
	size_t		count;

	i = 0;
	count = 0;
	if (h[i] == '\0' && n[i] == '\0')
		return ((char *)&h[i]);
	while (h[i])
	{
		while (h[i] == n[count] && h[i])
		{
			count++;
			i++;
		}
		if (count == ft_strlen(n))
			return ((char *)&(h[i - count]));
		i = i + 1 - count;
		count = 0;
	}
	return (NULL);
}

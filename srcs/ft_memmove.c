/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 10:49:41 by tholzheu          #+#    #+#             */
/*   Updated: 2019/05/18 20:27:41 by tholzheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	size_t		i;
	const char	*source;

	i = 0;
	dest = (char *)dst;
	source = (const char *)src;
	if (source < dest)
		while ((int)(--len) >= 0)
			*(dest + len) = *(source + len);
	else
		while (i < len)
		{
			*(dest + i) = *(source + i);
			i++;
		}
	return (dst);
}

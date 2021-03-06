/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tholzheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 11:55:36 by tholzheu          #+#    #+#             */
/*   Updated: 2019/05/18 20:27:42 by tholzheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	itoa_base(unsigned long nb, unsigned long base)
{
	if (nb >= base)
		itoa_base(nb / base, base);
	(nb % base) >= 10 && (nb % base) <= 15 ?
	ft_putchar(nb % base + 87) : ft_putchar(nb % base + '0');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coholbur <coholbur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:37:53 by coholbur          #+#    #+#             */
/*   Updated: 2024/12/14 17:18:10 by coholbur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigned(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr >= 10)
		len += ft_printf_unsigned(nbr / 10);
	ft_putchar_fd(nbr % 10 + '0', 1);
	len++;
	return (len);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coholbur <coholbur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:14:08 by coholbur          #+#    #+#             */
/*   Updated: 2024/12/14 17:16:49 by coholbur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_verify(const char c, va_list *list)
{
	if (c == 'c')
		return (ft_printf_char(va_arg(*list, int)));
	else if (c == 's')
		return (ft_printf_str(va_arg(*list, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_printf_nbr(va_arg(*list, int)));
	else if (c == 'u')
		return (ft_printf_unsigned(va_arg(*list, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_printf_hex(va_arg(*list, unsigned int), c));
	else if (c == 'p')
		return (ft_printf_ptr(va_arg(*list, unsigned long long)));
	else if (c == '%')
		return (ft_printf_char('%'));
	return (0);
}

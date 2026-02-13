/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coholbur <coholbur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:29:18 by coholbur          #+#    #+#             */
/*   Updated: 2024/12/11 18:21:02 by coholbur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	int		len;
	int		x;
	va_list	list;

	len = 0;
	x = 0;
	if (!format)
		return (0);
	va_start(list, format);
	while (format[x])
	{
		if (format[x] == '%')
		{
			len += ft_verify(format[x + 1], &list);
			x += 2;
		}
		else
		{
			len += ft_printf_char(format[x]);
			x++;
		}
	}
	va_end(list);
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coholbur <coholbur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:35:41 by coholbur          #+#    #+#             */
/*   Updated: 2024/12/14 17:21:32 by coholbur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else
	{
		if (ptr < 10)
		{
			ft_putchar_fd((ptr + '0'), 1);
		}
		else
		{
			ft_putchar_fd((ptr - 10 + 'a'), 1);
		}
	}
}

static int	ft_ptrlen(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
		return (1);
	else if (ptr <= 0)
		len++;
	while (ptr)
	{
		len++;
		ptr /= 16;
	}
	return (len);
}

int	ft_printf_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
	{
		len += write(1, "(nil)", 5);
	}
	else
	{
		len += write(1, "0x", 2);
		ft_putptr(ptr);
		len += ft_ptrlen(ptr);
	}
	return (len);
}

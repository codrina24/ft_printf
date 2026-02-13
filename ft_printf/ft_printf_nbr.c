/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coholbur <coholbur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:06:28 by coholbur          #+#    #+#             */
/*   Updated: 2024/12/14 18:01:30 by coholbur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_number(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		len++;
	}
	while (nbr)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

static void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
			ft_putnbr_fd(n, fd);
		}
		else if (n < 10)
		{
			c = n + '0';
			write(fd, &c, 1);
		}
		else
		{
			ft_putnbr_fd((n / 10), fd);
			c = (n % 10) + '0';
			write(fd, &c, 1);
		}
	}
}


int	ft_printf_nbr(int nbr)
{
	int	len;

	len = 0;
	ft_putnbr_fd(nbr, 1);
	len += len_number(nbr);
	return (len);
}

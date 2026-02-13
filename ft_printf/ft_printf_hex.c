/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coholbur <coholbur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:12:13 by coholbur          #+#    #+#             */
/*   Updated: 2024/12/14 17:53:12 by coholbur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int	ft_putnbr_basee(unsigned int nbr, const char *base)
{
	unsigned int	*new;
	unsigned int	base_len;
	int				len;
	int				i;

	base_len = ft_strlen(base);
	i = 0;
	len = 0;
	new = (unsigned int *)malloc(base_len * sizeof(unsigned int));
	if (!new)
		return (0);
	if (nbr == 0)
		len += write(1, "0", 1);
	while (nbr)
	{
		new[i] = nbr % base_len;
		nbr = nbr / base_len;
		i++;
	}
	while (i-- > 0)
		len += ft_putchar_fd(base[new[i]], 1);
	free(new);
	return (len);
}

int	ft_printf_hex(unsigned int nbr, const char type)
{
	int	len;

	len = 0;
	if (type == 'X')
	{
		len += ft_putnbr_basee(nbr, "0123456789ABCDEF");
	}
	else
	{
		len += ft_putnbr_basee(nbr, "0123456789abcdef");
	}
	return (len);
}

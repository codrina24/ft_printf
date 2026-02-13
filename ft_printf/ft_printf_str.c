/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coholbur <coholbur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:01:32 by coholbur          #+#    #+#             */
/*   Updated: 2024/12/14 17:17:45 by coholbur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *str)
{
	int	len;

	len = 0;
	if (str == 0)
	{
		len = ft_putstr_fd("(null)", 1);
		return (len);
	}
	len = ft_putstr_fd(str, 1);
	return (len);
}

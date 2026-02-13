/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coholbur <coholbur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:37:31 by coholbur          #+#    #+#             */
/*   Updated: 2024/12/14 17:58:37 by coholbur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(char *str, int fd);
int	ft_printf_char(int c);
int	ft_printf_str(char *str);
int	ft_printf_unsigned(unsigned int nbr);
int	ft_printf_hex(unsigned int nbr, const char type);
int	ft_printf_ptr(unsigned long long ptr);
int	ft_printf_nbr(int n);
int	ft_verify(const char c, va_list *list);
int	ft_printf(const char *format, ...);

#endif

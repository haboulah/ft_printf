/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboulah <haboulah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 23:39:03 by haboulah          #+#    #+#             */
/*   Updated: 2025/01/06 05:44:35 by haboulah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	handle_conversion(char specifier, va_list args);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_puthex(unsigned long long n, char specifier);
int	ft_putptr(unsigned long long ptr);

#endif

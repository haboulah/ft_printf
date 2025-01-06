/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboulah <haboulah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 03:08:09 by haboulah          #+#    #+#             */
/*   Updated: 2025/01/06 05:49:11 by haboulah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, char specifier)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_puthex(n / 16, specifier);
	if (specifier == 'x' || specifier == 'p')
		count += ft_putchar("0123456789abcdef"[n % 16]);
	else if (specifier == 'X')
		count += ft_putchar("0123456789ABCDEF"[n % 16]);
	return (count);
}

int	ft_putptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	count += ft_putstr("0x");
	count += ft_puthex(ptr, 'p');
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_strings.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboulah <haboulah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 03:08:09 by haboulah          #+#    #+#             */
/*   Updated: 2025/01/06 05:48:33 by haboulah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (*str)
	{
		count += ft_putchar(*str);
		str++;
	}
	return (count);
}

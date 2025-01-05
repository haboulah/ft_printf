/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   man_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haboulah <haboulah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 03:10:58 by haboulah          #+#    #+#             */
/*   Updated: 2025/01/05 03:11:05 by haboulah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("Bonjour, %s! %d %%\n", "le monde", 42);
	ft_printf("Adresse: %p\n", main);
	ft_printf("Hexadécimal: %x\n", 255);
	return (0);
}

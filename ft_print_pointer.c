/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuenaga <ksuenaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:44:18 by ksuenaga          #+#    #+#             */
/*   Updated: 2024/02/03 15:37:49 by ksuenaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *pointer)
{
	int		count;
	int		result;
	char	*hex;

	count = 0;
	result = 0;
	count += ft_print_string("0x");
	if (count == -1)
		return (-1);
	hex = ft_ullitoa_base((unsigned long long)pointer, "0123456789abcdef");
	count += ft_print_string(hex);
	if (count == -1)
		return (-1);
	free(hex);
	return (count);
}

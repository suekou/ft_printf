/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuenaga <ksuenaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:25:56 by ksuenaga          #+#    #+#             */
/*   Updated: 2024/02/03 15:48:32 by ksuenaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n)
{
	char	*str;
	int		count;

	count = -1;
	str = ft_ullitoa_base(n, "0123456789abcdef");
	if (!str)
		return (-1);
	count = ft_print_string(str);
	free(str);
	return (count);
}

int	ft_print_hex_upper(unsigned int n)
{
	char	*str;
	int		count;

	count = -1;
	str = ft_ullitoa_base(n, "0123456789ABCDEF");
	if (!str)
		return (-1);
	count = ft_print_string(str);
	free(str);
	return (count);
}

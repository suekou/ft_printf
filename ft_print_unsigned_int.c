/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuenaga <ksuenaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:14:17 by ksuenaga          #+#    #+#             */
/*   Updated: 2024/02/03 15:49:04 by ksuenaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_int(unsigned int n)
{
	char	*str;
	int		count;

	count = -1;
	str = ft_ullitoa_base(n, "0123456789");
	if (!str)
		return (-1);
	count = ft_print_string(str);
	free(str);
	return (count);
}

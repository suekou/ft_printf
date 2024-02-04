/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuenaga <ksuenaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:45:03 by ksuenaga          #+#    #+#             */
/*   Updated: 2024/02/03 15:37:41 by ksuenaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	i;
	int	count;
	int	result;

	if (str == NULL)
		str = "(null)";
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		result = ft_print_char(str[i]);
		if (result == -1)
			return (-1);
		count += result;
		i++;
	}
	return (count);
}

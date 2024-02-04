/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuenaga <ksuenaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:37:05 by ksuenaga          #+#    #+#             */
/*   Updated: 2024/02/03 16:07:25 by ksuenaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_format(char c, va_list args, int *count)
{
	int	result;

	if (c == 'c')
		result = ft_print_char(va_arg(args, int));
	else if (c == 's')
		result = ft_print_string(va_arg(args, char *));
	else if (c == 'p')
		result = ft_print_pointer(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		result = ft_print_int(va_arg(args, int));
	else if (c == 'u')
		result = ft_print_unsigned_int(va_arg(args, unsigned int));
	else if (c == 'x')
		result = ft_print_hex(va_arg(args, unsigned int));
	else if (c == 'X')
		result = ft_print_hex_upper(va_arg(args, unsigned int));
	else if (c == '%')
		result = ft_print_char('%');
	else
		result = ft_print_char(c);
	*count += result;
	if (result == -1)
		*count = -1;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		result;

	va_start(args, format);
	count = 0;
	while (*format && count != -1)
	{
		if (*format == '%')
			parse_format(*(++format), args, &count);
		else
		{
			result = ft_print_char(*format);
			if (result == -1)
			{
				count = -1;
				break ;
			}
			count += result;
		}
		format++;
	}
	va_end(args);
	return (count);
}

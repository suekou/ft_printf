/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuenaga <ksuenaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:33:56 by ksuenaga          #+#    #+#             */
/*   Updated: 2024/02/03 15:40:02 by ksuenaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_print_char(char c);
int		ft_print_string(char *str);
int		ft_print_int(int n);
int		ft_print_unsigned_int(unsigned int n);
int		ft_print_hex(unsigned int n);
int		ft_print_hex_upper(unsigned int n);
int		ft_print_pointer(void *ptr);
int		ft_printf(const char *format, ...);
void	parse_format(char c, va_list args, int *count);
char	*ft_ullitoa_base(unsigned long long n, char *base);
size_t	ft_strlen(const char *str);

#endif
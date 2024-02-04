/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullitoa_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuenaga <ksuenaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:54:29 by ksuenaga          #+#    #+#             */
/*   Updated: 2024/02/03 15:36:42 by ksuenaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ullitoa_base(unsigned long long n, char *base)
{
	char				*str;
	unsigned long long	nb;
	int					len;
	int					base_len;

	base_len = ft_strlen(base);
	len = 1;
	nb = n;
	while (nb >= (unsigned long long)base_len)
	{
		nb /= base_len;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}

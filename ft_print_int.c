/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuenaga <ksuenaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:36:24 by ksuenaga          #+#    #+#             */
/*   Updated: 2024/02/03 16:24:32 by ksuenaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_digits(long nb)
{
	int	digits;

	digits = 1;
	while (nb >= 10)
	{
		nb /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;
	int		neg;

	nb = n;
	neg = 0;
	if (nb < 0)
	{
		nb *= -1;
		neg = 1;
	}
	len = count_digits(nb);
	str = (char *)malloc(sizeof(char) * (neg + len + 1));
	if (!str)
		return (NULL);
	str[len + neg] = '\0';
	if (n < 0)
		str[0] = '-';
	while (len-- > 0)
	{
		str[len + neg] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

int	ft_print_int(int n)
{
	int		count;
	char	*str;

	count = 0;
	str = ft_itoa(n);
	if (str == NULL)
		return (-1);
	count += ft_print_string(str);
	free(str);
	return (count);
}

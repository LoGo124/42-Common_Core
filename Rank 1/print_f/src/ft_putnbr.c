/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:31:15 by nlopez-g          #+#    #+#             */
/*   Updated: 2023/08/12 00:33:34 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_putnbr(int a)
{
	char	res;

	res = '0';
	if (a == -2147483648)
		write(1, "-2147483648", 11);
	else if (a < 0)
	{
		a *= -1;
		write(1, "-", 1);
		a = a / 10;
		ft_putnbr(a);
		res = (a % 10) + 48;
		write(1, &res, 1);
	}
	else if (a < 10)
	{
		res += a;
		write(1, &res, 1);
	}
	else
	{
		ft_putnbr(a / 10);
		res = (a % 10) + 48;
		write(1, &res, 1);
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:09:38 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/12/23 20:52:52 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	signo;

	signo = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		signo = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (*str - '0') + (res * 10);
		str++;
	}
	res *= signo;
	return (res);
}

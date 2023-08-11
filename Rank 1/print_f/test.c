/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:52:48 by nlopez-g          #+#    #+#             */
/*   Updated: 2023/08/12 00:54:58 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "inc/ft_printf.h"

int	main(/*char *str*/void)
{
	char	*str;

	str = "Nacho";
	printf("Hello %s", str);
	ft_putchar('c');
	return (1);
	/*

	*strs = "Nacho";
	while (strs++ != NULL)
	{
		printf("Hello %s", strs);
		ft_printf(strs);
	}
	*/
}

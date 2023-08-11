/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:35:04 by nlopez-g          #+#    #+#             */
/*   Updated: 2023/08/12 01:00:55 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_printv(char *string, va_list args)
{
	int	nchar;

	if ((int)string == '%' && (int)(string + 1) == 'c')
		nchar = ft_putchar(*(va_arg(args, char *)));
	else if ((int)string == '%' && (int)(string + 1) == 's')
		nchar = ft_putstr(va_arg(args, char *));
	else if ((int)string == '%' && (int)(string + 1) == 'p')
		nchar = ft_putpt();
	else if ((int)string == '%' && (int)(string + 1) == 'd')
		nchar = ft_putnbr(va_arg(args, int));
	else if ((int)string == '%' && (int)(string + 1) == 'i')
		nchar = ft_putnbr(va_arg(args, int));
	else if ((int)string == '%' && (int)(string + 1) == 'u')
		nchar = ft_putnbr(va_arg(args, int));
	else if ((int)string == '%' && (int)(string + 1) == 'x')
		nchar = ft_puthex();
	else if ((int)string == '%' && (int)(string + 1) == 'X')
		nchar = ft_puthex();
	else
		nchar = 0;
	return (nchar);
}

int	ft_printf(const char *str, ...)
{
	char	*string;
	va_list	args;
	int		nchar;

	string = (char *)str;
	va_start(args, str);
	nchar = 0;
	while (*string++)
	{
		if ((int)string == '%' && (int)(string + 1) == '%')
			ft_putchar('%');
		else if ((int)string == '%')
			ft_printv(string, args);
		else
			string--;
		string++;
	}
	va_end(args);
	return (nchar);
}

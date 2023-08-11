/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:34:13 by nlopez-g          #+#    #+#             */
/*   Updated: 2023/07/26 17:13:34 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# include "../lib/libft/libft.h"

int		ft_printf(const char *str, ...);

int		ft_putchar(char c);

int		ft_putnbr(int a);

int		ft_putstr(char *str);

int		ft_puthex(void);

int		ft_putpt(void);

#endif
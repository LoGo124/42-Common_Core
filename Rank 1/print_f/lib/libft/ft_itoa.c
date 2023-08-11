/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:10:29 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/12/27 10:57:18 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long int n)
{
	if (n < 0)
		return (ft_intlen(n * -1) + 1);
	else if (n >= 10)
		return (ft_intlen(n / 10) + 1);
	else if (n >= 0 && n < 10)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			size;
	long int	i;

	i = (long int)n;
	size = ft_intlen(i);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (i < 0)
	{
		i *= -1;
		str[0] = '-';
	}
	while (size && !str[--size])
	{
		str[size] = (i % 10) + '0';
		i /= 10;
	}
	return (str);
}

//int	main(void)
//{
//	printf("-> %s\n", ft_itoa(2147483648));
//	printf("-> %s\n", ft_itoa(-2147483649));
//
//	return (0);
//}

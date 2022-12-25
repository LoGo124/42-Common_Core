/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:10:29 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/12/24 18:48:30 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	if (n < 0)
		return (ft_intlen(n * -1));
	else if (n >= 10)
		return (ft_intlen(n / 10) + 1);
	else if (n >= 0 && n < 10)
		return (1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		i;

	i = 0;
	//n = (long int)n;
	if (n >= 0)
	{
		size = (ft_intlen(n) + 1);
		str = (char *)ft_calloc(size, sizeof(char));
	}
	else if (n < 0)
	{
		size = (ft_intlen(n) + 2);
		str = (char *)ft_calloc(size, sizeof(char));
		n *= -1;
		str[i] = '-';
		i++;
	}
	if (!str)
		return (NULL);
	while (size--)
	{
		str[size] = '1';//(char)((n % 10) + '0');
		*str++;
		n /= 10;
	}
	return (str);
}

//int	main(int argc, char const *argv[])
//{
//	int	n;
//
//	n = 1001;
//	while (n-- > -1000)
//	{
//		printf("-> %i", ft_intlen(n));
//	}
//	return (0);
//}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:14:19 by nlopez-g          #+#    #+#             */
/*   Updated: 2023/01/02 11:01:04 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = NULL;
	while (*s)
	{
		if ((char)c == *s)
			res = (char *)s;
		s++;
	}
	if (*s == (char)c)
		res = (char *)s;
	return (res);
}
/*
int	main(void)
{
	printf("strrchr == %s\n", strrchr("abcdefghijklmnopqrstuvwxyz", 359));
	printf("ft_strrchr == %s\n", ft_strrchr("abcdefghijklmnopqrstuvwxyz", 359));
	return (0);
}
*/
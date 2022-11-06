/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:10:58 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/11/06 18:55:42 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	while (len--)
		ft_memcpy(&dst[len], &src[len], 1);
	return (dst);
}
/*
int	main(void)
{
	char	src[20] = "12345678901234567890";
	char	dst[20] = "12345";
	size_t	len = 21;
	unsigned long llen = 20;

	printf("memmove : %s\n", memmove(dst, src, llen));
	printf("ft_memmove : %s\n", ft_memmove(dst, src, len));
	return (0);
}
*/

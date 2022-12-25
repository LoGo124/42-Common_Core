/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:10:42 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/12/23 23:58:43 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	c;
	int		diff;

	c = 0;
	diff = 0;
	while (c < n && !diff)
	{
		diff = *(unsigned char *)(s1 + c) - *(unsigned char *)(s2 + c);
		c++;
	}
	if (c < n && !diff)
		diff = *(unsigned char *)(s1 + c) - *(unsigned char *)(s2 + c);
	return (diff);
}

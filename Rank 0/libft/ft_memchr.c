/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:10:36 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/11/26 22:36:19 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	while ((char)s)
	{
		if ((char) c == (char) s)
		{
			return ((char)s);
		}
		s++;
	}
	if ((char) s == (char) c)
		return ((char)s);
	else
		return (NULL);
}

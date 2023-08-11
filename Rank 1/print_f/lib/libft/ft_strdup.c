/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:12:17 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/12/25 20:04:27 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*point;

	i = 0;
	j = ft_strlen(s1);
	point = (char *)malloc(sizeof(char) * (j + 1));
	if (!point)
		return (NULL);
	ft_strlcpy(point, s1, (ft_strlen(s1)+1));
	return (point);
}

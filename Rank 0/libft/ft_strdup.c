/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:12:17 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/12/24 16:32:51 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = ft_strlen(s1);
	res = (char *)malloc(sizeof(char) * (j + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, (ft_strlen(s1)+1));
	return (res);
}

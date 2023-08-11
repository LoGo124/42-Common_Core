/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:14:32 by nlopez-g          #+#    #+#             */
/*   Updated: 2023/01/03 18:10:03 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*point;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	point = (char *)ft_calloc(len + 1, sizeof(char));
	if (!point)
		return (NULL);
	ft_strlcpy(point, (s + start), len + 1);
	return (point);
}

//int	main(void)
//{
//	char			*s;
//	unsigned int	start;
//	size_t			len;
//
//	s = "hola hole holi";
//	start = 1;
//	len = 1;
//	printf("=== substr ===\ns = %s\nstart = %i\n len = %zu\n, s, start, len);
//	printf("\nres = %s", ft_substr(s, start, len));
//	return 0;
//}

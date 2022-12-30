/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:13:33 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/12/27 11:44:13 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*point;
	size_t	size;		

	size = ft_strlen(s1) + ft_strlen(s2);
	point = ft_calloc(size + 1, sizeof(char));
	if (!point)
		return (NULL);
	ft_strlcpy(point, s1, ft_strlen(s1) + 1);
	ft_strlcat(point, s2, size + 1);
	return (point);
}

//int	main(void)
//{
//	char	*s1;
//	char	*s2;
//
//	s1 = "hola";
//	s2 = " hole";
//	printf("===== strjoin =====\ns1 = %s\ns2 = %s\n", s1, s2);
//	printf("resultat = %s\n", ft_strjoin(s1, s2));
//	return (0);
//}
//
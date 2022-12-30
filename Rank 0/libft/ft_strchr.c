/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:12:06 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/12/27 15:16:12 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((char)c == *s)
		{
			return (s);
		}
		s++;
	}
	if (*s == (char)c)
		return (s);
	else
		return (NULL);
}

//int main()
//{
//	char	*s1 = "barcelona";
//	int		c = 108;
//	printf("my own: %s\n", ft_strchr(s1, c));
//	printf("real: %s", strchr(s1, c));
//	return 0;
//}

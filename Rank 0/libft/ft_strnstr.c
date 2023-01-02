/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:14:13 by nlopez-g          #+#    #+#             */
/*   Updated: 2023/01/02 10:20:27 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"/*
#include <unistd.h>
#include <stdio.h>

char * strnstr(const char *haystack, const char *needle, size_t len);
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && len > i)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
		{
			j++;
			if (!needle[j])
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *haystac = "adios";
// 	const char *needl = "a";
// 	size_t len = 1;
// 	printf("%s\n",strnstr(haystac, needl, len));
// 	printf("%s\n",ft_strnstr(haystac, needl, len));
// }

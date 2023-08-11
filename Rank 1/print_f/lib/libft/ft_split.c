/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:11:51 by nlopez-g          #+#    #+#             */
/*   Updated: 2023/01/03 18:57:28 by nlopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_elemlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int	ft_elemcount(char const *s, char c)
{
	int	start;
	int	i;
	int	n_elements;

	start = 0;
	i = 0;
	n_elements = 0;
	if (!c && !*s)
		return (0);
	if (s[i] && s[i] != c)
		n_elements++;
	while (s[++i])
		if (s[i] != c && s[i - 1] == c)
			n_elements++;
	return (n_elements);
}

void	*ft_gratis(char **lista)
{
	int	i;

	i = -1;
	while (lista[++i])
		free(lista[i]);
	free(lista);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		n_elements;
	char	**lista;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	n_elements = ft_elemcount(s, c);
	lista = ft_calloc(n_elements + 1, sizeof(char *));
	if (!lista)
		return (NULL);
	while (i < n_elements)
	{
		if (s[j] != c)
		{
			lista[i] = ft_substr(&s[j], 0, ft_elemlen((s + j), c));
			if (!lista[i])
				return (ft_gratis(lista));
			i++;
		}
		j += ft_elemlen((s + j), c) + 1;
	}
	return (lista);
}

/*
int	main(void)
{
	char	*str = "^^^1^^2a,^^^^3^^^^--h^^^^";
	char	sep = '^';
	char	**lista = ft_split(str, sep);
	int		i;

	i = -1;
	while (lista[++i])
		printf("-> %s\tsize = %zu\n",lista[i], ft_strlen(lista[i]));
	printf("-> %s\n",lista[i]);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:11:51 by nlopez-g          #+#    #+#             */
/*   Updated: 2022/12/31 02:24:52 by nlopez-g         ###   ########.fr       */
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
	int	i;
	int	n_elements;

	i = -1;
	n_elements = 1;
	while (s[++i])
	{
		if (s[i] == c)
			n_elements += 1;
	}
	return (n_elements);
}

void	*ft_free(char **lista)
{
	int	i;

	i = -1;
	while (lista[++i])
	{
		free(lista[i]);
	}
	free(lista);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		n_elements;
	char	**lista;

	i = -1;
	j = 0;
	n_elements = ft_elemcount(s, c);
	lista = ft_calloc(n_elements + 1, sizeof(char *));
	if (!s)
		return (NULL);
	while (++i < n_elements)
	{
		lista[i] = ft_calloc(ft_elemlen((s + j), c) + 1, sizeof(char *));
		if (!lista[i])
			return (ft_free(lista));
		j += ft_strlcpy(lista[i], (s + j), ft_elemlen((s + j), c));
	}
	return (lista);
}

/*
int	main(void)
{
	char	*str = "Hola Adios HOLA ADIOS";
	char	sep = ' ';
	char	**lista = ft_split(str, sep);

	printf("-> %s",lista[0]);
}
*/

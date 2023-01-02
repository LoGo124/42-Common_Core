/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-g <nlopez-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:11:51 by nlopez-g          #+#    #+#             */
/*   Updated: 2023/01/02 13:01:57 by nlopez-g         ###   ########.fr       */
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
	if (s[i])
		n_elements++;
	while (s[++i])
	{
		if (s[i] == c && start)
			n_elements++;
		if (s[i] == c)
			start = 0;
		else
			start++;
	}
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
	n_elements = ft_elemcount(s, c);
	lista = ft_calloc(n_elements + 1, sizeof(char *));
	if (!s)
		return (NULL);
	while (i < n_elements)
	{
		if (s[j] != c)
		{
			lista[i] = ft_calloc(ft_elemlen((s + j), c) + 1, sizeof(char *));
			if (!lista[i])
				return (ft_gratis(lista));
			ft_strlcpy(lista[i], (s + j), ft_elemlen((s + j), c) + 1);
			i++;
		}
		j += ft_elemlen((s + j), c) + 1;
	}
	return (lista);
}

// A parte de lo de contar más opalabras de las que hay (por culpa del elemcount),
// te falla el strlcpy ya que ha la variable 'j' le estás sumando el retorno de ft_strlcpy
// y está función te devuelve el tamaño del src que le has pasado, y claro, tú le estás pasando
// el tamaño de lo que quieres copiar y eso es lo único que te copia en dst (lista[i]),
// pero el retorno es de el tamaño total del string que te hayan pasado en el ft_split.
// De forma que depués de almacenar la primera palabra el valor de la variable j es mayor
// o igual que el tamaño del string.

/*
int	main(void)
{
	char	*str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char	sep = ' ';
	char	**lista = ft_split(str, sep);
	int		i;

	i = -1;
	while (lista[++i])
		printf("-> %s",lista[i]);
	printf("-> %s",lista[i]);
}
*/

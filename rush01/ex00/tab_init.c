/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:06:18 by jcaron            #+#    #+#             */
/*   Updated: 2022/08/20 19:10:06 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	**tab_init(void)
{
	int	**tab;
	int	i;

	i = 0;
	tab = malloc(4 * sizeof(int *));
	if (!tab)
		return (0);
	while (i < 4)
	{
		tab[i] = malloc(4 * sizeof(int));
		if (!tab[i])
			return (0);
		i++;
	}
	tab_clear(tab);
	return (tab);
}

void	tab_clear(int **tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	tab_free(int **tab)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

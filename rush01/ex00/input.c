/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:43:25 by jcaron            #+#    #+#             */
/*   Updated: 2022/08/21 09:44:17 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	tab_input(char argv, char **argc, int **tab)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	if (argv != 2)
		return (-1);
	while (argc[1][i] && index < 16)
	{
		if (argc[1][i] >= '1' && argc[1][i] <= '4')
		{
			tab[index / 4][index % 4] = argc[1][i] - '0';
			i++;
			index++;
		}
		else
			return (-1);
		if (argc[1][i] == ' ')
			i++;
		else if (argc[1][i] != 0)
			return (-1);
	}
	if (i == 31 && argc[1][i] == 0)
		return (0);
	return (-1);
}

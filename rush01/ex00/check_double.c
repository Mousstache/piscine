/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:05:51 by jcaron            #+#    #+#             */
/*   Updated: 2022/08/20 19:11:15 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	check_double(int **tab_tower, int index, int heigh)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tab_tower[index / 4][i] == heigh && (index % 4) != i)
			return (0);
		if (tab_tower[i][index % 4] == heigh && (index / 4) != i)
			return (0);
		i++;
	}
	return (1);
}

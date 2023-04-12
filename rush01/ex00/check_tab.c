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

int	check_final(int **tab_tower, int **tab_view)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tab_view[0][i] != calc_col_up(tab_tower, i))
			return (0);
		if (tab_view[2][i] != calc_row_left(tab_tower, i))
			return (0);
		if (tab_view[1][i] != calc_col_down(tab_tower, i))
			return (0);
		if (tab_view[3][i] != calc_row_right(tab_tower, i))
			return (0);
		i++;
	}
	return (1);
}

/*
int	check_part(int **tab_tower, int **tab_view, int x, int y)
{
	if (tab_view[0][x] > calc_col_up(tab_tower, x))
		return (0);
	if (tab_view[2][y] > calc_row_left(tab_tower, y))
		return (0);
	if (tab_view[1][x] > calc_col_down(tab_tower, x))
		return (0);
	if (tab_view[3][y] > calc_row_right(tab_tower, y))
		return (0);
	return (1);
}
*/

int	calc_col_up(int **tab_tower, int col)
{
	int	i;
	int	max;
	int	nb_tower;

	i = 0;
	max = 0;
	nb_tower = 0;
	while (i <= 3)
	{
		if (tab_tower[i][col] > max)
		{
			max = tab_tower[i][col];
			nb_tower++;
		}
		i++;
	}
	return (nb_tower);
}

int	calc_row_left(int **tab_tower, int row)
{
	int	i;
	int	max;
	int	nb_tower;

	i = 0;
	max = 0;
	nb_tower = 0;
	while (i <= 3)
	{
		if (tab_tower[row][i] > max)
		{
			max = tab_tower[row][i];
			nb_tower++;
		}
		i++;
	}
	return (nb_tower);
}

int	calc_col_down(int **tab_tower, int col)
{
	int	i;
	int	max;
	int	nb_tower;

	i = 3;
	max = 0;
	nb_tower = 0;
	while (i >= 0)
	{
		if (tab_tower[i][col] > max)
		{
			max = tab_tower[i][col];
			nb_tower++;
		}
		i--;
	}
	return (nb_tower);
}

int	calc_row_right(int **tab_tower, int row)
{
	int	i;
	int	max;
	int	nb_tower;

	i = 3;
	max = 0;
	nb_tower = 0;
	while (i >= 0)
	{
		if (tab_tower[row][i] > max)
		{
			max = tab_tower[row][i];
			nb_tower++;
		}
		i--;
	}
	return (nb_tower);
}

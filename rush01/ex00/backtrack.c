/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:39:08 by jcaron            #+#    #+#             */
/*   Updated: 2022/08/20 19:54:06 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	backtrack(int **tab_tower, int **tab_view, int index)
{
	int	heigh;

	if (index == 16)
	{
		if (check_final(tab_tower, tab_view))
			return (1);
	}
	if (index <= 15)
	{
		heigh = 1;
		while (heigh <= 4)
		{
			if (check_double(tab_tower, index, heigh))
			{
				tab_tower[index / 4][index % 4] = heigh;
				if (backtrack(tab_tower, tab_view, index + 1))
					return (1);
				tab_tower[index / 4][index % 4] = 0;
			}
			heigh ++;
		}
	}
	return (0);
}

/*
void	increment(int *x, int *y)
{
	if (*x == 3)
	{
		*x = 0;
		*y = *y + 1;
	}
	else
		*x = *x + 1;
}

void	decrement(int *x, int *y)
{
	if (*x == 0)
	{
		*x = 3;
		*y = *y - 1;
	}
	else
		*x = *x - 1;
}

int	backtrack(int **tab_tower, int **tab_view, int x, int y)
{
	int	heigh;

	if (x == 3 && y == 3)
	{
		if (check_final(tab_tower, tab_view))
			return (1);
	}
	heigh = 1;	
	while (heigh <= 4)
	{
		tab_tower[x][y] = heigh;
		if (check_double(tab_tower, x, y))
		{
			increment(&x, &y);
			if (backtrack(tab_tower, tab_view, x, y))
				return (1);
			if (check_final(tab_tower, tab_view))
				return (1);
			tab_tower[x][y] = 0;
			decrement(&x, &y);
		}
		heigh ++;
	}
	if (x == 3 && y == 3)
	{
		if (check_final(tab_tower, tab_view))
			return (1);
	}
	return (0);
}
*/

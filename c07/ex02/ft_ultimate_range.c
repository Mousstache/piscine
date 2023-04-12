/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:16:37 by motroian          #+#    #+#             */
/*   Updated: 2022/08/30 20:27:18 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	if (min >= max)
		return (0);
	range[0] = malloc(sizeof(int) * (max - min));
	if (!range[0])
		return (-1);
	i = 0;
	j = min;
	while (j < max)
	{
		range[0][i] = j;
		i++;
		j++;
	}
	return (i);
}

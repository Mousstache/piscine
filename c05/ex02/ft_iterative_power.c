/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:15:24 by motroian          #+#    #+#             */
/*   Updated: 2022/08/22 14:03:38 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	r;

	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = nb;
	r = 1;
	while (power > 0)
	{
		r = r * i;
		power--;
	}
	return (r);
}

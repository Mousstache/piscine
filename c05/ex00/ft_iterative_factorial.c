/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:17:35 by motroian          #+#    #+#             */
/*   Updated: 2022/08/22 12:29:20 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = nb;
	r = 1;
	while (i > 0)
	{
		r = r * i;
		i--;
	}
	return (r);
}

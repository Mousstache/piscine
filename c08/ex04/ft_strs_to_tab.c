/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:12:55 by motroian          #+#    #+#             */
/*   Updated: 2022/08/29 19:24:49 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int			i;
	char		*dup;

	i = 0;
	dup = malloc(sizeof(char *) * ft_strlen(str) + 1);
	if (!dup)
		return (0);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*t1;

	i = 0;
	t1 = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!t1)
		return (0);
	while (i < ac)
	{
		t1[i].size = ft_strlen(av[i]);
		t1[i].str = av[i];
		t1[i].copy = ft_strdup(av[i]);
		i++;
	}
	t1[i].str = 0;
	return (t1);
}

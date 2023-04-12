/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:11:56 by jcaron            #+#    #+#             */
/*   Updated: 2022/08/20 19:38:35 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	main(int argc, char **argv)
{
	int	**tab_tower;
	int	**tab_view;

	tab_tower = tab_init();
	tab_view = tab_init();
	if (!tab_tower || !tab_view)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	if (tab_input(argc, argv, tab_view))
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	if (backtrack(tab_tower, tab_view, 0))
		print_tab(tab_tower);
	else
		write(1, "Error\n", 6);
	tab_free(tab_tower);
	tab_free(tab_view);
	return (0);
}

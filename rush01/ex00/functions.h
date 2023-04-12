/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimendon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:33:41 by vimendon          #+#    #+#             */
/*   Updated: 2022/08/21 11:33:45 by vimendon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <unistd.h>
# include <stdlib.h>

int		tab_input(char argv, char **argc, int **tab);

int		backtrack(int **tab_tower, int **tab_view, int index);

int		check_double(int **tab_tower, int index, int heigh);

int		check_final(int **tab_tower, int **tab_view);

int		calc_col_up(int **tab_tower, int col);

int		calc_row_left(int **tab_tower, int row);

int		calc_col_down(int **tab_tower, int col);

int		calc_row_right(int **tab_tower, int row);

int		check_final(int **tab_tower, int **tab_view);

int		**tab_init(void);

void	ft_putchar(char c);

void	print_tab(int **tab);

void	tab_clear(int **tab);

void	tab_free(int **tab);

#endif /* !FUNCTIONS_H */

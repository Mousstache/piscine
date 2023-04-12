/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 10:07:36 by lle-bret          #+#    #+#             */
/*   Updated: 2022/08/14 10:58:28 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	if (x <= 0)
		return ;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((j == 0 && i == 0) || (j == y - 1 && i == x - 1))
				ft_putchar('A');
			else if ((j == 0 && i == x - 1) || (j == y - 1 && i == 0))
				ft_putchar('C');
			else if ((j == 0 || j == y - 1) || (i == 0 || i == x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

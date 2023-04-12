/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-bret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 10:04:34 by lle-bret          #+#    #+#             */
/*   Updated: 2022/08/14 10:50:21 by lle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	ft_is_num(char c)
{
	if (47 < c && c < 58)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str, int res)
{
	int	i;

	if (str[0] == '\0' || !ft_is_num(str[0]))
		return (res);
	else
	{
		i = str[0] - 48;
		return (ft_atoi (str + 1, 10 * res + i));
	}
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc > 2)
	{
		x = ft_atoi(argv[1], 0);
		y = ft_atoi(argv[2], 0);
		rush(x, y);
	}
	return (0);
}

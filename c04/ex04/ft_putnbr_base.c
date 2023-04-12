/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:29:42 by motroian          #+#    #+#             */
/*   Updated: 2022/08/28 17:31:18 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	check_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			if ((base[i] < 33) || (base[i] > 126))
				return (0);
			if ((base[i] == '-') || (base[i] == '+'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				check;
	int				len_base;
	long int		n;

	n = nbr;
	check = check_error(base);
	len_base = ft_strlen(base);
	if (check == 1)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = n * -1;
		}
		if (n < len_base)
		{
			ft_putchar(base[n]);
		}
		if (n >= len_base)
		{
			ft_putnbr_base(n / len_base, base);
			ft_putnbr_base(n % len_base, base);
		}
	}
}

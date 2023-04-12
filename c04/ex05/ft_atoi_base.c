/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:02:16 by motroian          #+#    #+#             */
/*   Updated: 2022/08/28 22:56:03 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	index_dans_la_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	ft_sign(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign * i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	final;
	int	size_base;
	int	sign;

	sign = 1;
	final = 0;
	size_base = ft_strlen(base);
	if (!check_base(base))
		return (0);
	i = ft_sign(str);
	if (i < 0)
	{
		i = i * -1;
		sign = -1;
	}
	while (str[i])
	{
		if (index_dans_la_base(str[i], base) == -1)
			return (0);
		final = final * size_base ;
		final = final + index_dans_la_base(str[i], base);
		i++;
	}
	return (final * sign);
}

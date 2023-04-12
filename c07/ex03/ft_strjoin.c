/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 23:02:06 by motroian          #+#    #+#             */
/*   Updated: 2022/08/31 14:39:48 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	final_len(int size, char **s1, char *sep)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (i < size)
	{
		res += ft_strlen(s1[i]);
		if (i + 1 < size)
			res += ft_strlen(sep);
		i++;
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char *) * final_len(size, strs, sep) + 1);
	if (!str)
		return (0);
	i = 0;
	*str = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i + 1 < size)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

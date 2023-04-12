/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:06:05 by motroian          #+#    #+#             */
/*   Updated: 2022/08/30 20:06:31 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_char_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_char_is_sep(str[i], charset))
		i++;
	return (i);
}

int	ft_word_count(char *str, char *charset)
{
	int	i;
	int	compt;
	int	word_len;

	i = 0;
	compt = 0;
	while (str[i])
	{
		if (str[i] && ft_char_is_sep(str[i], charset))
			i++;
		else
		{
			compt++;
			word_len = ft_word_len(&str[i], charset);
			i += word_len;
		}
	}
	return (compt);
}

char	*ft_malloc_word(char *str, int u)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (u + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < u)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		word_count;
	int		word_len;
	int		i;
	int		j;

	word_count = ft_word_count(str, charset);
	arr = malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < word_count)
	{
		while (str[j] && ft_char_is_sep(str[j], charset))
			j++;
		word_len = ft_word_len(&str[j], charset);
		arr[i] = ft_malloc_word(&str[j], word_len);
		i++;
		j += word_len;
	}
	arr[i] = NULL;
	return (arr);
}

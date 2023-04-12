/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:48:30 by motroian          #+#    #+#             */
/*   Updated: 2022/08/16 17:55:54 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char    to_hex_digit(int i)
{
    if (i > 16)
    {
        return (i);
    }
    if (i < 10)
    {
        return (i + '0');
    }
    return (i - 10 + 'a');
}

void    ft_putstr_non_printable(char *str)
{
    char    a;
    char    b;

    while (*str != '\0')
    {
        if (*str < 32)
        {
            a = to_hex_digit(*str / 16);
            b = to_hex_digit(*str % 16);
            ft_putstr_non_printable("\\");
            write(1, &a, 1);
            write(1, &b, 1);
        }
        else if (*str == 127)
        {
            ft_putstr_non_printable("\\7f");
        }
        else
        {
            write(1, &*str, 1);
        }
        str++;
    }
}

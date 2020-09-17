/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code_fabien.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 09:18:39 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/15 09:19:25 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_first_line(int x, const int foll)
{
    int     i;
    i = - 1;
    while (i++ < x)
    {
        if (foll == 0)
        {
            if (i == 0)
                ft_putchar('/');
            else if (i == x - 1)
                ft_putchar('\\');
            else if (i > 0 && i < x - 1)
                ft_putchar('*');
        }
        else if (foll == 1)
        {
            if (i == 0)
                ft_putchar('\\');
            else if (i == x - 1)
                ft_putchar('/');
            else if (i > 0 && i < x - 1)
                ft_putchar('*');
        }
    }
    ft_putchar('\n');
}
void    ft_middle_line(int larg)
{
    int     i;
    i = 0;
    while (i < larg)
    {
        if ((i == 0 || i == larg - 1))
            ft_putchar('*');
        else if (i > 0 && i < larg - 1)
            ft_putchar(' ');
        i++;
    }
    ft_putchar('\n');
}
void    rush(int x, int y)
{
    int i;
    i = 0;
    if (x < 1 || y < 1)
        return ;
    while (i < y)
    {
        if (i == 0)
            ft_first_line(x, 0);
        else if (i == y - 1)
            ft_first_line(x, 1);
        else if (i > 0 && i < y - 1)
            ft_middle_line(x);
        i++;
    }
}

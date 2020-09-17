/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ultimate_div_mod.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:29:44 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/16 17:30:35 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    *a = *a / *b;
    *b = *a % *b;
}

int main()
{
    int *a;
    int *b;
    int c;
    int d;

    a = 160;
    b = 15;
    resultat = &c;
    reste = &d;
    ft_ultimate_div_mod(*a, *b);
    printf("resultat = %d, reste + %d\n", *a, *b);
    return (0);
}
`

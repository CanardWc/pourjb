/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_div_C-01.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:04:01 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/14 17:13:44 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main()
{
	int m;
	int n;
	int o;
	int p;
	int *resultat;
	int *reste;

	m = 240;
	n = 48;
	o = 0;
	p = 0;
	resultat = &o;
	reste = &p;
	ft_div_mod(m, n, resultat, reste);
	printf("resultat = %d, reste = %d\n", *resultat, *reste);
	return (0);
}



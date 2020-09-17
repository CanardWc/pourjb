/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_swap_C-01.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 17:20:38 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/14 17:23:47 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int z;
	int y;

	z = 0;
	y = 1984;
	y = ft_swap(&z, &y);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 21:10:11 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/16 11:14:21 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (!((str[i] > 47 && str[i] < 58) || str[i] == 0))
				return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_str_is_numeric(""));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 11:32:50 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/16 11:45:15 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 64 && str[i] < 91) || str[i] == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_str_is_uppercase("A"));
}

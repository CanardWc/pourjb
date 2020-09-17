/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 11:53:17 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/16 12:28:16 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 33 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_str_is_printable(""));
}

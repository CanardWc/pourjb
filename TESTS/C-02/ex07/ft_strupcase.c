/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 12:36:03 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/16 13:59:53 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123) 
			str[i] = str[i] - 32;
		i++;
	}

		return(str);
} 

#include <stdio.h>
int main()
{
	char objet[] = "ddfdfdf";
	printf("%s", ft_strupcase(objet)); 
}

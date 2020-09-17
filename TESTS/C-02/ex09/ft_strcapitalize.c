/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 14:28:09 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/17 13:04:39 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	i = i + 1;
	while (str[i] != '\0')
	{
		 if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z') && 
				(!(str[i - 1] >= 'A' && str[i -1] <= 'Z')) &&
				(!(str[i - 1] >= '0' && str[i - 1] <= '9')))
		{	
			if (str[i] >= 'a' && str[i] <= 'z') 
				str[i] = str[i] - 32; 		
		}
		i++;
	}
	return (str);
	
}
#include <unistd.h>
#include <stdio.h>

int main()
{
	char chaine[] = "aNobli Bbibelot d'iIfMNanite sonore, 42mots ? et soixante+trois+virgules";
	printf("%s", ft_strcapitalize(chaine));
}

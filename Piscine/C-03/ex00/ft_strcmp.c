/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:58:35 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/17 19:52:02 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int  i;

	i = 0;
	while (s1[i] != '\0') 
	{	
		if (s1[i] != s2[i])	
			return ();
		if (s1[i] < s2[i])
			return (-n);
		else if 
			return (+n);
		i++;
	}
}

		if (s1[i] == s2[i])
			return (0);
	




// compare les chaines *s1 et *s2
// RENVOIE : - une valeur negative si *s1 < *s2
// 			 - une valeur nulle si *s1 == *s2
// 			 - une valeur positive si *s1 > *s2

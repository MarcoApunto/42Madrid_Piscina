/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 12:42:32 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/01 11:50:38 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		x;
	int		joker;
	char	c;

	x = 0;
	while (str[x] != '\0')
	{	
		joker = 1;
		c = str[x - 1];
		if ((c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122))
			joker = 0;
		if (c >= 48 && c <= 57)
			joker = 0;
		if (joker == 1 && str[x] >= 97 && str[x] <= 122)
			str[x] = str[x] - 32;
		if (joker == 0 && str[x] >= 65 && str[x] <= 90)
			str[x] = str[x] + 32;
		++x;
	}
	return (str);
}

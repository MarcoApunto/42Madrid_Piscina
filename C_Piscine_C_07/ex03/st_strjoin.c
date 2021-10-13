/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 10:39:10 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/12 23:02:15 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		x;

	str = (char *)malloc(sizeof(strs));
	i = 0;
	j = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while(strs[i][j] != '\0')
		{
			str[x] = strs[i][j];
			j++;
			x++;
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			str[x] = sep[j];
			x++;
			j++;
		}
		i++;
	}
	str[x] = '\0';
	return (str);
}

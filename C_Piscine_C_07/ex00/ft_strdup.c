/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:17:58 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/12 10:36:35 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		++x;
	return (x);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		++x;
	}
	dest[x] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		x;

	x = 0;
	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	while (dest[x] != src[x])
	{
		ft_strcpy(&dest[x], src);
		x++;
	}
	return (dest);
}

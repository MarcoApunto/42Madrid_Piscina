/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 17:06:31 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/02 20:48:04 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (src[x] && x < n)
	{
		dest[x] = src[x];
		++x;
	}
	while (x < n)
	{
		dest[x] = '\0';
		++x;
	}
	return (dest);
}

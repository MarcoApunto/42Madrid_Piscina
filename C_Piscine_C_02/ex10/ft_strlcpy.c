/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:19:10 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/01 11:54:03 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	len;

	len = 0;
	while (src[len])
		++len;
	if (size == 0)
		return (len);
	x = 0;
	while (src[x] && x < size - 1)
	{
		dest[x] = src[x];
		++x;
	}
	dest[x] = '\0';
	return (len);
}

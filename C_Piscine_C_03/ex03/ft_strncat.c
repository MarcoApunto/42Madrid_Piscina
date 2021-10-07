/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 21:54:29 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/02 22:14:26 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	len;

	len = 0;
	while (dest[len])
		++len;
	x = 0;
	while (src[x] && x < nb)
	{
		dest[len + x] = src[x];
		++x;
	}
	dest[len + x] = '\0';
	return (dest);
}

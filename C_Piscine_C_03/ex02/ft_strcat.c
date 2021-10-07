/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 21:39:06 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/02 22:15:18 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	len;

	x = 0;
	len = 0;
	while (dest[x] != '\0')
	{
		++len;
		++x;
	}
	x = 0;
	while (src[x] != '\0')
	{
		dest[len + x] = src[x];
		++x;
	}
	dest[len + x] = '\0';
	return (dest);
}

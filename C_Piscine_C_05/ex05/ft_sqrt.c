/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:27:21 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/06 18:47:26 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb > 0)
	{
		while (x * x <= nb)
		{
			if (x * x == nb)
				return (x);
			else if (x >= 46341)
				return (0);
			x++;
		}
	}
	return (0);
}

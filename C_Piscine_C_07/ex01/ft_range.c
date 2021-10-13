/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:14:01 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/12 21:34:34 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*cont;

	if (min >= max)
		return (0);
	cont = (int *)malloc(sizeof(int) * (max - min));
	if (cont == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		cont[i] = min;
		i++;
		min++;
	}
	return (cont);
}

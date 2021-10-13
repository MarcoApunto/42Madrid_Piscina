/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 10:35:53 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/12 17:23:31 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*cont;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	cont = (int *)malloc(sizeof(int) * (max - min));
	if (cont == NULL)
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		cont[i] = min;
		i++;
		min++;
	}
	*range = cont;
	return (i);
}

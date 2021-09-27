/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 21:09:34 by maferrei          #+#    #+#             */
/*   Updated: 2021/09/27 15:44:30 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positivo;
	char	negativo;

	positivo = 'P';
	negativo = 'N';
	if (n < 0)
	{
		write(1, &negativo, 1);
	}
	else
	{
		write(1, &positivo, 1);
	}
}

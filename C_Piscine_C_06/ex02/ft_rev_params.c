/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:18:37 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/06 21:15:55 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arg, char *_args[])
{
	int	i;
	int	j;

	i = arg - 1;
	j = 0;
	if (arg > 1)
	{
		while (i > 0)
		{
			j = 0;
			while (_args[i][j] != '\0')
			{
				write(1, &_args[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}

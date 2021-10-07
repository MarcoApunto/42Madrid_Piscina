/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:48:06 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/06 19:06:33 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int args, char *arg[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (args > 1)
	{
		while (args > i)
		{
			j = 0;
			while (arg[i][j] != '\0')
			{
				write(1, &arg[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}	
	}
	return (0);
}

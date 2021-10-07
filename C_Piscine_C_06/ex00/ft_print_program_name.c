/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:58:25 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/07 17:11:31 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int args, char *arg[])
{	
	int	i;

	i = 0;
	if (args > 0)
	{
		while (arg[0][i] != '\0')
		{
			write(1, &arg[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

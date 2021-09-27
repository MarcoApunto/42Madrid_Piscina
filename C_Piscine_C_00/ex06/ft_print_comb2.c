/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:14:45 by maferrei          #+#    #+#             */
/*   Updated: 2021/09/27 17:21:18 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	nums(int a, int b)
{
	ft_putchar(a / 10 % 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 % 10 + '0');
	ft_putchar(b % 10 + '0');
	if (a < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	c;
	int	d;

	c = -1;
	while (++c < 100)
	{
		d = c;
		while (++d < 100)
		{
			nums(c, d);
		}
	}
}

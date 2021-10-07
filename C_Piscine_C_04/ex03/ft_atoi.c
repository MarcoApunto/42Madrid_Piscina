/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:43:16 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/05 13:21:27 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 1;
	z = 0;
	while ((str[x] <= '\r' && str[x] >= '\t') || str[x] == ' ')
		++x;
	while (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			y *= -1;
		++x;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		z = (str[x] - '0') + (z * 10);
		++x;
	}
	return (z * y);
}

int main()
{
	printf("%d", ft_atoi(" 		  --+-3987\n9190"));
}
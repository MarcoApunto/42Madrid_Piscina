/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:07:20 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/13 23:21:37 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		++x;
	}
	dest[x] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		x;

	x = 0;
	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	while (dest[x] != src[x])
	{
		ft_strcpy(&dest[x], src);
		x++;
	}
	return (dest);
}

struct s_tock_str	*ft_strs_to_tab(int ac, char **av)
{
	s_tock_str	*tab;

	tab = (int *)malloc(sizeof(s_tock_str) * (ac + 1));
	if (tab == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[1];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 21:58:14 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/02 22:10:04 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		x;
	int		y;
	char	*localizer;

	if (to_find[0] == '\0')
		return (str);
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == to_find[0])
		{
			localizer = str + x;
			y = 0;
			while (str[x + y] == to_find[y])
			{
				if (to_find[y + 1] == '\0')
					return (localizer);
				++y;
			}
			localizer = 0;
		}
		++x;
	}
	return (0);
}

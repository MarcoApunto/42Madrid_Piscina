/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferrei <maferrei@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:11:18 by maferrei          #+#    #+#             */
/*   Updated: 2021/10/13 21:29:40 by maferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H
# include <unistd.h>
# define ABS(value) (value < 0) ? (value * -1) : (value)
#endif
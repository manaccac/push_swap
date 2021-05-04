/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaccac <manaccac@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:40:13 by jdel-ros          #+#    #+#             */
/*   Updated: 2020/06/01 14:03:34 by manaccac         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int		ft_isdigit(int c)
{
	if (c)
	{
		if ((c >= '0' && c <= '9') || c == '-')
			return (1);
		else
			return (0);
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaccac <manaccac@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 10:44:02 by manaccac          #+#    #+#             */
/*   Updated: 2021/05/06 11:25:45 by manaccac         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c)
	{
		if (c >= '0' && c <= '9')
			return (1);
		else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			return (1);
		else
			return (0);
	}
	return (0);
}

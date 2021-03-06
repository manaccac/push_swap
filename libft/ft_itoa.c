/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaccac <manaccac@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 10:48:27 by manaccac          #+#    #+#             */
/*   Updated: 2021/05/06 11:25:45 by manaccac         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_taille(int n)
{
	int			i;
	long int	nb;

	i = 0;
	nb = n;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i = 1;
		nb = nb * -1;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	if (nb < 10 && nb > 0)
		return (i + 1);
	else
		return (i);
}

static char	*ft_zero(long int n)
{
	char	*str;

	str = NULL;
	if (n == 0)
	{
		str = malloc(2 * sizeof(char));
		str[0] = n + 48;
		str[1] = '\0';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	nb;

	len = ft_taille(n);
	nb = (long int)n;
	if (nb == 0)
		return (ft_zero(nb));
	str = malloc((len + 1) * sizeof(char));
	if (!(str))
		return (NULL);
	if (nb <= 0)
	{
		nb = nb * -1;
		str[0] = '-';
	}
	str[len--] = '\0';
	while (nb > 0)
	{
		str[len] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
	return (str);
}

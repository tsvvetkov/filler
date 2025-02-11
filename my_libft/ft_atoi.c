/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:42:22 by pcomic            #+#    #+#             */
/*   Updated: 2019/09/24 21:59:44 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long		nb;
	int				minus;

	nb = 0;
	minus = 1;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	if (*str == '-')
		minus = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		if (nb > nb * 10 + (*str - '0'))
		{
			if (minus == -1)
				return (0);
			else
				return (-1);
		}
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (nb * minus);
}

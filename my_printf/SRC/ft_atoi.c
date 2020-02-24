/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:14:47 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 03:14:53 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		ft_atoi(const char *str)
{
	long int			i;
	unsigned long long	n;
	int					neg;

	i = 0;
	n = 0;
	neg = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\n')
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	if (n > 9223372036854775807)
		return (neg > 0 ? -1 : 0);
	else
		return ((int)n * neg);
}

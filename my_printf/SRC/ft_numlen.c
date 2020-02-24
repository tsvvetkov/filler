/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:16:32 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 03:16:34 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		ft_numlen(u_int64_t num, int base)
{
	int i;

	i = 0;
	if (num == 0)
		return (1);
	else
		while (num)
		{
			num /= base;
			i++;
		}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabasex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:16:22 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 04:36:06 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_itoabasex(t_format *spec, uint64_t i, char *s, int num_len)
{
	uint64_t numsys;

	numsys = spec->base;
	while (i > 0)
	{
		if (i < numsys)
		{
			if (spec->type != 'X')
				(s[num_len] = IT[i]);
			else
				(s[num_len] = ITX[i]);
			return ;
		}
		else
		{
			if (spec->type != 'X')
				(s[num_len] = IT[i % numsys]);
			else
				(s[num_len] = ITX[i % numsys]);
		}
		i = i / numsys;
		num_len--;
	}
	return ;
}

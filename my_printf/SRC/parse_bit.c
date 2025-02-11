/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_bit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:18:11 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 03:18:13 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		parse_bit(t_format *spec, va_list vl)
{
	int			i;
	char		*str;
	uint64_t	unval;
	int			strlen;

	unval = va_arg(vl, uint64_t);
	i = 0;
	str = NULL;
	strlen = 8;
	if (unval > 0xFF && unval <= 0xFFFF)
		strlen = 16;
	else if (unval > 0xFFFF)
		strlen = 32;
	if (spec->width - strlen > 0)
		spec->width = spec->width - strlen;
	else
		spec->width = 0;
	strlen = strlen + spec->width;
	str = record_bit(spec, str, strlen, unval);
	if (str)
	{
		write(1, str, strlen);
		free(str);
	}
	return (strlen);
}

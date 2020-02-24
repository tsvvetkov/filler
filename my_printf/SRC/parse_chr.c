/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_chr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:18:17 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 03:18:19 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		parse_chr(t_format *spec, va_list vl)
{
	char			ch;
	char			*str;

	str = NULL;
	ch = (char)va_arg(vl, int);
	if (spec->width > 1)
	{
		str = record_chr(spec, str, ch);
		if (str)
		{
			write(1, str, spec->width);
			free(str);
		}
	}
	else
	{
		write(1, &ch, 1);
		return (1);
	}
	return (spec->width);
}

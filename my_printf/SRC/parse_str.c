/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:19:39 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 04:46:39 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		parse_str(t_format *spec, va_list vl)
{
	int		tmp_len;
	int		strlen;
	char	*strnew;
	char	*str;

	if (!(str = va_arg(vl, char *)))
		str = (char *)NULL_STRING;
	strlen = ft_strlen(str);
	if (spec->accur >= 0 && spec->accur < strlen)
		strlen = spec->accur;
	if (spec->width > strlen)
		spec->width = spec->width - strlen;
	else
		spec->width = 0;
	tmp_len = spec->width + strlen;
	strnew = record_str(spec, str, --strlen, tmp_len);
	write(1, strnew, tmp_len);
	ft_strdel(&strnew);
	return (tmp_len);
}

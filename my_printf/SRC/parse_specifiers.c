/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_specifiers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:19:31 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 04:46:40 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

char	*parse_specifiers(t_format *spec, char *str, va_list vl)
{
	ft_clean_struct(spec);
	if (!*str)
		return (str);
	if (*str == '-' || *str == '+' || *str == ' ' || *str == '#' || *str == '0')
		str = is_flag(spec, str);
	if (*str == '*' || (*str >= '1' && *str <= '9'))
		str = is_width(spec, str, vl);
	if ((*str == '*' || (*str >= '1' && *str <= '9')) && spec->width == 0)
		str = is_width(spec, str, vl);
	if (*str == '.')
		str = is_accuracy(&spec->accur, ++str, vl);
	if (*str == 'l' || *str == 'L' || *str == 'h' || *str == 'z')
		str = is_size(&spec->size, str);
	if (*str > '$')
		str = is_type(&spec->type, str);
	return (str);
}

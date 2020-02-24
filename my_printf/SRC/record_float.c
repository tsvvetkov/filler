/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   record_float.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:20:00 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 04:36:22 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void		out_float(t_format *spec, char **str_flag, char **str_number)
{
	int		len_num;
	int		len_flag;

	len_num = ft_strlen(*str_number);
	len_flag = ft_strlen(*str_flag);
	if (spec->space && spec->zero)
		write(1, " ", 1);
	if ((spec->sign || spec->plus) && spec->zero)
		(spec->sign) ? (write(1, "-", 1)) : (write(1, "+", 1));
	if (*str_flag)
		write(1, *str_flag, len_flag);
	if (spec->space && !spec->zero)
		write(1, " ", 1);
	if ((spec->sign || spec->plus) && !spec->zero)
		(spec->sign) ? (write(1, "-", 1)) : (write(1, "+", 1));
	if (*str_number)
		write(1, *str_number, len_num);
	return ;
}

void		out_float_minus(t_format *spec, char **str_flag, char **str_number)
{
	int		len_num;
	int		len_flag;

	len_num = ft_strlen(*str_number);
	len_flag = ft_strlen(*str_flag);
	if (spec->space)
		write(1, " ", 1);
	if (spec->sign || spec->plus)
		(spec->sign) ? (write(1, "-", 1)) : (write(1, "+", 1));
	if (*str_number)
		write(1, *str_number, len_num);
	if (*str_flag)
		write(1, *str_flag, len_flag);
	return ;
}

void		record_float(t_format *spec, char **str_flag, char **str_number)
{
	if (spec->minus == 0)
		out_float(spec, str_flag, str_number);
	else if (spec->minus == 1)
		out_float_minus(spec, str_flag, str_number);
	ft_strdel(str_flag);
	ft_strdel(str_number);
	return ;
}

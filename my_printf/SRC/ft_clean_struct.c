/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_struct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:16:00 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 03:16:03 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_clean_struct(t_format *spec)
{
	spec->width = 0;
	spec->accur = -1;
	spec->dollar = 0;
	spec->sign = 0;
	spec->base = 0;
	spec->minus = 0;
	spec->plus = 0;
	spec->space = 0;
	spec->sharp = 0;
	spec->zero = 0;
	spec->size = 0;
	spec->type = 0;
	return ;
}

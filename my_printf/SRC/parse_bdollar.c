/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_bdollar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:18:06 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 03:18:08 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	parse_bdollar(int dollar, va_list vl)
{
	while (dollar > 1)
	{
		va_arg(vl, int);
		dollar--;
	}
	return ;
}

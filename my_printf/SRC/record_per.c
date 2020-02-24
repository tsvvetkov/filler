/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   record_per.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:20:05 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 04:36:24 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

char	*record_per(t_format *spec, int i)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * (i))))
		return (0);
	str[--i] = '\0';
	if (spec->minus == 1)
		while (i > 0)
			str[i--] = ' ';
	str[i--] = '%';
	if (spec->minus == 0)
	{
		while (i > 0)
		{
			if (spec->zero == 0)
				str[i--] = ' ';
			else if (spec->zero == 1)
				str[i--] = '0';
		}
		if (spec->zero == 0)
			str[i] = ' ';
		else if (spec->zero == 1)
			str[i] = '0';
	}
	return (str);
}

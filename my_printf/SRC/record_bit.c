/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   record_bit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:19:46 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 04:36:19 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

char	*record_bit(t_format *spec, char *str, int str_len, uint64_t unval)
{
	int	i;
	int bit;

	i = 0;
	bit = str_len - spec->width - 1;
	if (!(str = (char *)malloc(sizeof(char) * (str_len + spec->width + 1))))
		return (0);
	str[str_len] = '\0';
	if (spec->minus == 0 && spec->width)
		while (spec->width--)
			str[i++] = ' ';
	while (bit >= 0)
	{
		if (unval & 1 << bit--)
			str[i] = '1';
		else
			str[i] = '0';
		i++;
	}
	if (spec->minus == 1 && spec->width)
		while (spec->width--)
			str[i++] = ' ';
	return (str);
}

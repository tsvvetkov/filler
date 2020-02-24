/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_sym_cmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:16:57 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 03:17:00 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		ft_str_sym_cmp(char *str_dad, char *str_son, char ch)
{
	int		i;

	i = 0;
	while (*str_dad && *str_son && *str_dad != ch)
	{
		if (*str_dad != *str_son)
			return (0);
		str_dad++;
		str_son++;
		i++;
	}
	return ((*str_dad == '}' && !*str_son) ? i : 0);
}

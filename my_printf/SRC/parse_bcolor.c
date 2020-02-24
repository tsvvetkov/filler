/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_bcolor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:17:57 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 04:35:26 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

char	*parse_bcolor(char *str)
{
	int		i;

	i = 0;
	str++;
	if ((*str == 'r') && ((i = ft_str_sym_cmp(str, "red", '}')) > 0))
		write(1, "\e[38;5;196m", 11);
	else if ((*str == 'g') && ((i = ft_str_sym_cmp(str, "green", '}')) > 0))
		write(1, "\e[38;5;48m", 10);
	else if ((*str == 'b') && ((i = ft_str_sym_cmp(str, "blue", '}')) > 0))
		write(1, "\e[38;5;69m", 10);
	else if ((*str == 'y') && ((i = ft_str_sym_cmp(str, "yellow", '}')) > 0))
		write(1, "\e[38;5;226m", 11);
	else if ((*str == 'o') && ((i = ft_str_sym_cmp(str, "orange", '}')) > 0))
		write(1, "\e[38;5;208m", 11);
	else if ((*str == 'p') && ((i = ft_str_sym_cmp(str, "pink", '}')) > 0))
		write(1, "\e[38;5;205m", 11);
	else if ((*str == 'n') && ((i = ft_str_sym_cmp(str, "neon", '}')) > 0))
		write(1, "\e[38;5;123m", 11);
	else if ((*str == 'e') && ((i = ft_str_sym_cmp(str, "eoc", '}')) > 0))
		write(1, "\e[0m", 4);
	return ((i > 0) ? (str + i) : (--str));
}

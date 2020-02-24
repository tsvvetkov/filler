/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_mult.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:15:53 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 03:15:56 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_clean_mult(t_mult *m)
{
	m->len1 = 0;
	m->len2 = 0;
	ft_strdel(&(m->str1));
	ft_strdel(&(m->str2));
	return ;
}

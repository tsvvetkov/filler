/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 19:46:04 by pcomic            #+#    #+#             */
/*   Updated: 2019/09/24 22:13:21 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iterative_factorial(int nb)
{
	int i;
	int a;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	a = 1;
	i = 1;
	while (i <= nb)
	{
		a = a * i;
		i++;
	}
	return (a);
}

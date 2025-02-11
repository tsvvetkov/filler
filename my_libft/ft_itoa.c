/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:43:46 by pcomic            #+#    #+#             */
/*   Updated: 2019/09/24 21:59:25 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(int n)
{
	int	q;

	if (n <= 0)
		q = 1;
	else
		q = 0;
	while (n != 0)
	{
		n = n / 10;
		q++;
	}
	return (q);
}

char		*ft_itoa(int n)
{
	char				*res;
	unsigned int		nb;
	int					q;

	if (!(res = (char *)malloc(sizeof(char) * (ft_digits(n) + 1))))
		return (NULL);
	q = ft_digits(n) - 1;
	res[ft_digits(n)] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		nb = n * -1;
	}
	else
		nb = n;
	if (nb == 0)
		res[q] = '0';
	else
		while (nb != 0)
		{
			res[q] = (nb % 10 + 48);
			q--;
			nb = nb / 10;
		}
	return (res);
}

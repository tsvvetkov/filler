/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:46:05 by pcomic            #+#    #+#             */
/*   Updated: 2019/09/24 21:46:06 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t num)
{
	const unsigned char	*tmpstr;
	unsigned char		c;

	tmpstr = (const unsigned char *)str;
	c = (unsigned char)ch;
	while (num != 0)
	{
		if (*(tmpstr) == c)
			return ((void *)tmpstr);
		num--;
		tmpstr++;
	}
	return (NULL);
}

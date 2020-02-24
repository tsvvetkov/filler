/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:58:57 by pcomic            #+#    #+#             */
/*   Updated: 2019/09/24 21:58:58 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t num)
{
	unsigned char			*tmpdest;
	const unsigned char		*tmpsrc;
	unsigned char			c;

	tmpdest = (unsigned char*)dest;
	tmpsrc = (const unsigned char*)src;
	c = (unsigned char)ch;
	while (num > 0)
	{
		*(tmpdest) = *(tmpsrc);
		if (*(tmpdest) == c)
			return ((void *)(tmpdest + 1));
		tmpdest++;
		tmpsrc++;
		num--;
	}
	return (NULL);
}

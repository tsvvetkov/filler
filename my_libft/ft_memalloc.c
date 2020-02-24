/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:45:41 by pcomic            #+#    #+#             */
/*   Updated: 2019/09/24 21:45:42 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)malloc(size);
	if (NULL == tmp)
		return (NULL);
	while (size != 0)
	{
		size--;
		*(tmp + size) = 0;
	}
	return ((void *)tmp);
}

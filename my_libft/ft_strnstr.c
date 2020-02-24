/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:55:56 by pcomic            #+#    #+#             */
/*   Updated: 2019/09/24 21:55:57 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *where, const char *what, size_t n)
{
	unsigned int	j;
	size_t			q;

	if (!*what)
		return ((char *)where);
	while (*where && n != 0)
	{
		j = 0;
		q = n;
		while (*(what + j) && (*(where + j) == *(what + j)) && q != 0)
		{
			q--;
			j++;
		}
		if (*(what + j) == '\0')
			return ((char *)(where));
		where++;
		n--;
	}
	return (NULL);
}

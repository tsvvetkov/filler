/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:56:20 by pcomic            #+#    #+#             */
/*   Updated: 2019/09/24 21:56:22 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *where, const char *what)
{
	unsigned int	j;

	if (!*what)
		return ((char *)where);
	while (*where)
	{
		j = 0;
		while (*(what + j) && (*(where + j) == *(what + j)))
			j++;
		if (*(what + j) == '\0')
			return ((char *)(where));
		where++;
	}
	return (NULL);
}

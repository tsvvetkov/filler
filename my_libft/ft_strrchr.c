/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:56:04 by pcomic            #+#    #+#             */
/*   Updated: 2019/09/24 21:56:05 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	c;
	size_t	i;

	c = (char)ch;
	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i--;
	}
	if (str[i] == c)
		return ((char *)(str + i));
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <pcomic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 02:03:57 by pcomic            #+#    #+#             */
/*   Updated: 2020/02/24 02:03:59 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	l;
	char	*tmp;

	i = 0;
	l = ft_strlen(s);
	tmp = NULL;
	tmp = (char *)malloc(sizeof(char) * l + 1);
	if (tmp == NULL)
		return (NULL);
	while (i < l)
	{
		tmp[i] = s[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

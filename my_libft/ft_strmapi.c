/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:53:40 by pcomic            #+#    #+#             */
/*   Updated: 2019/09/24 21:53:41 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	q;
	char	*tmp;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	q = 0;
	tmp = (char *)malloc(sizeof(char) * (i + 1));
	if (NULL == tmp)
		return (NULL);
	while (q < i)
	{
		tmp[q] = (*f)(q, s[q]);
		q++;
	}
	tmp[q] = '\0';
	return (tmp);
}

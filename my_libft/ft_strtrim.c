/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:56:35 by pcomic            #+#    #+#             */
/*   Updated: 2019/09/24 21:57:16 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_null_str(void)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char));
	if (NULL == tmp)
		return (NULL);
	*tmp = '\0';
	return (tmp);
}

char		*ft_strtrim(char const *s)
{
	size_t	b;
	size_t	f;
	size_t	i;
	size_t	n;
	char	*str;

	if (!s)
		return (NULL);
	if (!*s)
		return (ft_null_str());
	b = 0;
	n = ft_strlen(s);
	f = ft_strlen(s) - 1;
	i = 0;
	while (s[b] != '\0' && (s[b] == ' ' || s[b] == '\n' || s[b] == '\t'))
		b++;
	while (b != n && (s[f] == ' ' || s[f] == '\n' || s[f] == '\t'))
		f--;
	str = (char *)malloc(sizeof(char) * (f - b + 1 + 1));
	if (NULL == str)
		return (NULL);
	while (b <= f)
		str[i++] = s[b++];
	str[i] = '\0';
	return (str);
}

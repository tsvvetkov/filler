/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   record_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rretta <rretta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 03:20:12 by rretta            #+#    #+#             */
/*   Updated: 2020/02/04 04:46:46 by rretta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

char		*record_str(t_format *spec, char *str, int str_len, int tmp_len)
{
	char	*strnew;
	int		i;

	strnew = NULL;
	i = tmp_len - 1;
	if (!(strnew = (char *)malloc(sizeof(char) * (tmp_len))))
		return (NULL);
	strnew[i] = '\0';
	while (str_len >= 0 && spec->minus == 0)
		strnew[i--] = str[str_len--];
	while (spec->width > 0)
	{
		strnew[i--] = ' ';
		spec->width--;
	}
	while (str_len >= 0 && spec->minus == 1)
		strnew[i--] = str[str_len--];
	return (strnew);
}

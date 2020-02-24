/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <pcomic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 01:29:36 by pcomic            #+#    #+#             */
/*   Updated: 2020/02/24 01:31:00 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/filler.h"

int			main(void)
{
	t_f		f[1];
	t_p		p[1];
	t_m		m[1];
	t_pos	pos[1];
	char	*line;

	line = NULL;
	init_structs(f, p, m, pos);
	if (check_player(f, &line) == 1)
	{
		ft_strdel(&line);
		return (1);
	}
	solving_filler(f, &line);
	free_data(f, &line);
	return (0);
}

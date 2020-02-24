/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <pcomic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 01:31:20 by pcomic            #+#    #+#             */
/*   Updated: 2020/02/24 01:31:22 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/filler.h"

int			check_player(t_f *f, char **line)
{
	while (get_next_line(0, &(*line)))
	{
		if (**line == '$' && !f->ally)
		{
			if (ft_strinstr(*line, NAME_ALLY) && ft_strinstr(*line, "p1"))
				record_player(f, TRUE);
			else
				record_player(f, FALSE);
			break ;
		}
	}
	return (f->ally && f->enemy ? 0 : 1);
}

void		free_data(t_f *f, char **line)
{
	if (f->m->map)
		ft_arrdel((void ***)&f->m->map);
	if (f->p->piece)
		ft_arrdel((void ***)&f->p->piece);
	if (*line)
		free(*line);
	return ;
}

int			get_size(int *height, int *width, char **line)
{
	char	**tmp;

	if (!(tmp = ft_strsplit(*line, ' ')))
		return (1);
	*height = ft_atoi(*(tmp + 1));
	*width = ft_atoi(*(tmp + 2));
	ft_arrdel((void ***)&tmp);
	return (0);
}

int			manhattan_formula(int x, int y, int i, int j)
{
	int		a;
	int		b;

	if (i > x)
		a = i - x;
	else
		a = x - i;
	if (j > y)
		b = j - y;
	else
		b = y - j;
	return (a + b);
}

void		init_structs(t_f *f, t_p *p, t_m *m, t_pos *pos)
{
	p->width = 0;
	p->height = 0;
	p->piece = NULL;
	m->width = 0;
	m->height = 0;
	m->map = NULL;
	pos->i = 0;
	pos->j = 0;
	pos->x = 0;
	pos->y = 0;
	f->ally = '\0';
	f->enemy = '\0';
	f->p = p;
	f->m = m;
	f->pos = pos;
}

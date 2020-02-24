/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <pcomic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 20:08:22 by pcomic            #+#    #+#             */
/*   Updated: 2020/02/24 05:54:32 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** if (res == 0 && (sfd[fd] == NULL || sfd[fd] == '\0'))
** return (0);
** else
** return (str_to_sfd(&sfd[fd], line));
*/

static int		str_to_sfd(char **sfd, char **line)
{
	unsigned int	len;
	char			*temp;

	len = 0;
	while ((*sfd)[len] != '\n' && (*sfd)[len])
		len++;
	if ((*sfd)[len] == '\n')
	{
		*line = ft_strsub(*sfd, 0, len);
		temp = ft_strdup(*sfd + len + 1);
		free(*sfd);
		*sfd = temp;
		if ((*sfd)[0] == '\0')
			ft_strdel(sfd);
	}
	else
	{
		*line = ft_strdup(*sfd);
		ft_strdel(sfd);
	}
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char		*sfd[FD];
	char			buf[BUFF_SIZE + 1];
	char			*temp;
	int				res;

	ft_memdel((void **)&(*line));
	if (!line || fd < 0 || (res = read(fd, buf, 0)) < 0 || BUFF_SIZE <= 0)
		return (-1);
	while ((res = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[res] = '\0';
		if (sfd[fd] == NULL)
			sfd[fd] = ft_strdup(buf);
		else
		{
			temp = ft_strjoin(sfd[fd], buf);
			free(sfd[fd]);
			sfd[fd] = temp;
		}
		if (ft_strchr(sfd[fd], '\n') != NULL)
			break ;
	}
	return ((res == 0 && (sfd[fd] == NULL || sfd[fd] == '\0')) ?
			0 : str_to_sfd(&sfd[fd], line));
}

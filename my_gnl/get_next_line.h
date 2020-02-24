/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <pcomic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 20:05:27 by pcomic            #+#    #+#             */
/*   Updated: 2020/02/24 05:39:33 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "../my_libft/libft.h"
# include <fcntl.h>
# include <sys/types.h>

# define BUFF_SIZE 1
# define FD 10240

int		get_next_line(const int fd, char **line);

#endif

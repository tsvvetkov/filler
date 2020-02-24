/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:44:34 by pcomic            #+#    #+#             */
/*   Updated: 2019/09/24 21:44:35 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;
	t_list	*tmp;

	if (!alst || !del)
		return ;
	ptr = *alst;
	while (ptr)
	{
		tmp = ptr->next;
		ft_lstdelone(&ptr, del);
		ptr = tmp;
	}
	*alst = NULL;
}

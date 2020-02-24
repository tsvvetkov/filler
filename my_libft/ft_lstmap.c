/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcomic <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:45:21 by pcomic            #+#    #+#             */
/*   Updated: 2019/09/24 21:45:23 by pcomic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_free(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		ft_memdel((void**)&tmp);
		lst = tmp;
	}
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*node;
	t_list	*f_node;
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = f(lst);
	f_node = ft_lstnew(tmp->content, tmp->content_size);
	if (f_node == NULL)
		return (NULL);
	node = f_node;
	while (lst->next)
	{
		lst = lst->next;
		tmp = f(lst);
		node->next = ft_lstnew(tmp->content, tmp->content_size);
		if (node->next == NULL)
		{
			ft_free(f_node);
			return (NULL);
		}
		node = node->next;
	}
	return (f_node);
}

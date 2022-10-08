/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:21:15 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/08 12:21:37 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	navigator for the given list, heading for the created list

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*prev;
	t_list	*heading;
	t_list	*header;

	heading = ft_lstnew(0);
	header = heading;
	if (header == 0 || lst == 0)
		return (0);
	heading->content = f(lst->content);
	prev = lst;
	lst = lst->next;
	while (lst)
	{
		heading->next = ft_lstnew(f(lst->content));
		if (heading->next == 0)
		{
			ft_lstclear(&header, del);
			return (header);
		}
		heading = heading->next;
		lst = lst->next;
	}
	return (header);
}

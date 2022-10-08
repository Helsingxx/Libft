/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:11:34 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/08 12:11:47 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nextnode;
	t_list	*save;

	nextnode = *lst;
	while (nextnode != 0)
	{
		del(nextnode->content);
		save = nextnode;
		nextnode = nextnode->next;
		free(save);
	}
	*lst = 0;
}

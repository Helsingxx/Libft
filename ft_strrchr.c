/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:51:25 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/07 18:42:54 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + ft_strlen(s)));
	while (a >= 0)
	{
		if (s[a] == c)
			break ;
		a--;
	}
	if (a >= 0)
		return ((char *)(s + a));
	return (0);
}

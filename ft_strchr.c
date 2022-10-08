/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:19:37 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/07 10:38:13 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	a;

	a = 0;
	if (c == 0)
		return ((char *)(s + ft_strlen(s)));
	while (a < ft_strlen(s))
	{
		if (s[a] == c)
			return ((char *)(s + a));
		a++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:47:33 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/08 12:33:24 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// double while loops, fixate a character then search the needle, 
// don't overpass the limits "strlen needle\haystack" & "maxlen"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		a;
	size_t	b;

	a = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (a < (int) len && haystack[a] != 0
		&& (size_t) a < ft_strlen(haystack))
	{
		b = 0;
		while (b < ft_strlen(needle) && b < ft_strlen(haystack) - a
			&& b < len - a)
		{
			if (haystack[b + a] != needle[b])
				break ;
			b++;
		}
		if (b == ft_strlen(needle))
		{
			return ((char *)(haystack + a));
		}
		a++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:44:35 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/07 10:36:28 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	const char		*sc;

	a = 0;
	sc = (const char *) s;
	while (a < n)
	{
		if (sc[a] == c)
			return ((void *)(s + a));
		a++;
	}
	return (0);
}

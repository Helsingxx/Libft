/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:52:47 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/07 10:36:25 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			a;
	const char		*s1c;
	const char		*s2c;

	a = 0;
	s1c = (const char *) s1;
	s2c = (const char *) s2;
	while (a < n)
	{
		if (s1c[a] != s2c[a])
			return ((unsigned char) s1c[a] - (unsigned char) s2c[a]);
		a++;
	}
	return (0);
}

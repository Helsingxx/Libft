/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:54:17 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/07 10:40:49 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	while (s1[a] != 0 && s2[a] != 0 && a < n)
	{
		if (s1[a] != s2[a])
			return ((unsigned char) s1[a] - (unsigned char) s2[a]);
		a++;
	}
	return (0);
}

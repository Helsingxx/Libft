/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:49:31 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/07 10:47:32 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	a;

	a = 0;
	while (a < (int) ft_strlen(src) && a < (int) dstsize - 1)
	{
		dst[a] = src[a];
		a++;
	}
	if (dstsize > 0)
		dst[a] = '\x00';
	return (ft_strlen(src));
}

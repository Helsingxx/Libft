/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:56:35 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/07 17:51:04 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		a;
	char		*dstc;
	char		*srcc;

	a = 0;
	dstc = (char *) dst;
	srcc = (char *) src;
	if (dst == 0 && src == 0)
		return (0);
	while (a < n)
	{
		dstc[a] = srcc[a];
		a++;
	}
	return (dst);
}

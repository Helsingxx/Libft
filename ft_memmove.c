/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:03:23 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/08 12:25:08 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	move(char *dstc, char *srcc, int end, size_t len)
{
	if (dstc - srcc > 0)
	{	
		end = len - 1;
		while (end >= 0)
		{
			dstc[end] = srcc[end];
			end--;
		}
	}
	else
	{
		end = 0;
		while (end < (int) len)
		{
			dstc[end] = srcc[end];
			end++;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstc;
	char	*srcc;
	int		end;

	dstc = (char *) dst;
	srcc = (char *) src;
	if (dst == 0 && src == 0)
		return (0);
	end = 0;
	move(dstc, srcc, end, len);
	return (dst);
}

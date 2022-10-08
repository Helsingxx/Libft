/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:07:17 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/07 10:36:08 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		a;
	char		*bc;

	a = 0;
	bc = (char *)b;
	while (a < len)
	{
		bc[a] = c;
		a++;
	}
	return (b);
}

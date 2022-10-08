/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:26:10 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/07 10:31:04 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	int		a;
	char	*sc;

	a = 0;
	sc = (char *) s;
	while (a < (int) n)
	{
		sc[a] = 0;
		a++;
	}
}

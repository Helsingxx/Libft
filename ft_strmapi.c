/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:14:18 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/07 21:24:14 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	a;

	result = malloc(ft_strlen(s) + 1);
	a = 0;
	if (result == 0)
		return (0);
	while (a < ft_strlen(s))
	{
		result[a] = f(a, s[a]);
		a++;
	}
	result[a] = 0;
	return (result);
}

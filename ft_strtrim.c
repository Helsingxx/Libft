/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:50:55 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/08 12:34:29 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// es == end_to_start

static void	es(int *beginning, int *end, char const *s1, char const *set)
{
	int	a;
	int	b;

	a = ft_strlen(s1) - 1;
	while (a > *beginning)
	{
		b = 0;
		while (b < (int) ft_strlen(set))
		{
			if (s1[a] == set[b])
				break ;
			b++;
		}
		if (s1[a] != set[b])
		{
			*end = a + 1;
			break ;
		}
		a--;
	}
}

static void	start_to_end(int *beginning, char const *s1, char const *set)
{
	size_t	a;
	size_t	b;

	*beginning = 0;
	a = 0;
	while (a < ft_strlen(s1))
	{
		b = 0;
		while (b < ft_strlen(set))
		{
			if (s1[a] == set[b])
				break ;
			b++;
		}
		if (s1[a] != set[b])
		{
			*beginning = a;
			break ;
		}
		a++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		beginning;
	int		end;
	char	*trimmed;

	end = 0;
	start_to_end(&beginning, s1, set);
	es(&beginning, &end, s1, set);
	trimmed = malloc(end - beginning + 1);
	if (trimmed == 0)
		return (0);
	ft_strlcpy(trimmed, &s1[beginning], end - beginning + 1);
	return (trimmed);
}

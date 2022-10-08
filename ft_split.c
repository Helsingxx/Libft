/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:18:02 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/08 12:31:40 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// "a" shouldn't be zero (there's a hypothetical "c" above it) 
// else we'd be filling in an empty string, thus we fix it above
// a null byte counts as a "c" for reasons obvious
// lastc isn't assigned until it is copied
// if s[a] is a null (end of string), copy what came before 
// it if it exists and if there is no interruption right before it

/*char	**ft_split(char const *s, char c)
{
    int a = 0;
    int lastc = -1;
    int listindex = 0;
    char **list = ft_calloc (sizeof(char *) * ft_strlen(s) + 1, 1);
    while (a < ft_strlen(s))
    {
        if (s[a] == c && a == 0)
            lastc = 0;
        if (s[a] == c && a != 0 && s[a - 1] != c)
        {
            list[listindex] = malloc(a - lastc);
            ft_strlcpy(list[listindex], &s[lastc + 1], a - lastc);
            listindex++;
        }
        if (s[a] == c)
            lastc = a;
        a++;
    }
    if (s[a] == 0 && a > 0 && s[a - 1] != c)
    {
        list[listindex] = malloc(a - lastc);
        ft_strlcpy(list[listindex++], &s[lastc + 1], a - lastc);
    }
    list[listindex] = malloc (1);
    list[listindex] = 0;
    return (list);
}
*/

void	split(char const *s, char c, char **list)
{
	size_t	a;
	int		save;
	int		listindex;

	listindex = 0;
	a = 0;
	if (list != 0)
	{
		while (a < ft_strlen(s))
		{
			if (s[a] != c)
			{
				save = a;
				while (s[a] != c && s[a] != '\x00')
					a++;
				list[listindex] = ft_calloc(a - save + 1, 1);
				ft_strlcpy(list[listindex], &s[save], a - save + 1);
				listindex++;
			}
			a++;
		}
		list[listindex] = 0;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**list;

	list = ft_calloc (sizeof(char *) * ft_strlen(s) + 1, 1);
	split(s, c, list);
	return (list);
}

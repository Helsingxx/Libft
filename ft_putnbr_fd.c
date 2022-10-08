/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:13:07 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/07 21:40:07 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void recursive(long n, int fd)
{
	char character;
	
	if (n > 0)
		recursive(n / 10, fd);
	character = n % 10 + '0';
	write(fd, &character, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long longnum = n;
	if (longnum < 0)
	{
		write(fd, "-", 1);
		longnum *= -1;
	}
	if (longnum == 0)
	{
		write (fd, "0", 1);
	}
	recursive(longnum, fd);
}

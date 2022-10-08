/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamrati <eamrati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:23:44 by eamrati           #+#    #+#             */
/*   Updated: 2022/10/08 12:02:33 by eamrati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
int ft_pow (int val, int power)
{
	int a;

	a = 0;
	if (power == 0 && val == 0)
		return (0);
	if (power == 0)
		return (1);
	while (a < power - 1)
	{
		val = val * val;
		a++;
	}
	return (val);
}

int negative(const char *str, int a)
{
	int save;
	long returned;
	int power;

	returned = 0;
	power = 0;
	save = a;
	while (str[a] >= 48 && str[a] <= 57)
		a++;
	a--;
	while (a >= save)
	{
		returned -= (str[a] - 48) * ft_pow(10, power);
		a--;
		power++;
	}
	return (returned);
}
*/

int	positive(const char *str, int a, int sign)
{
	unsigned long	number;

	number = 0;
	while (str[a] >= 48 && str[a] <= 57)
	{
		number *= 10;
		number += str[a] - 48;
		a++;
	}
	if (sign == 1 && number > 2147483647)
		return (-1);
	if (sign == -1 && number > 2147483648)
		return (0);
	return (number);
}

int	ft_atoi(const char *str)
{
	int	a;

	a = 0;
	while (str[a] == '\t' || str[a] == '\n' || str[a] == '\v'
		|| str[a] == '\f' || str[a] == '\r' || str[a] == ' ')
		a++;
	if (str[a] == '-')
	{
		a++;
		return (positive(str, a, -1) * -1);
	}
	else if (str[a] == '+')
		a++;
	return (positive(str, a, 1));
}

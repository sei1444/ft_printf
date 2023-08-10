/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:07:11 by seono             #+#    #+#             */
/*   Updated: 2023/07/23 17:11:38 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getsign(const char *nptr, int i, int *sign)
{
	if (nptr[i] == '-')
	{
		*sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	int		digit;
	long	unsigned_num;

	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	sign = 1;
	i = getsign(nptr, i, &sign);
	unsigned_num = 0;
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		digit = nptr[i] - '0';
		if (sign == 1 && (LONG_MAX - digit) / 10 < unsigned_num)
			return (-1);
		if (sign == -1 && (LONG_MIN + digit) / 10 > -unsigned_num)
			return (0);
		unsigned_num = unsigned_num * 10 + digit;
		i++;
	}
	return (sign * (int)unsigned_num);
}

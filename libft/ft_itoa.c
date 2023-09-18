/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:27:16 by marvin            #+#    #+#             */
/*   Updated: 2023/06/07 15:43:11 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	str_size(long num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		num *= -1;
		count++;
	}
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

static char	*handle_zero(void)
{
	char	*str;

	str = malloc(sizeof(char) * 2);
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(long num)
{
	int		count;
	char	*str;

	if (num == 0)
		return (handle_zero());
	count = str_size(num);
	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	str[count] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num != 0)
	{
		str[count - 1] = num % 10 + '0';
		num /= 10;
		count--;
	}
	return (str);
}

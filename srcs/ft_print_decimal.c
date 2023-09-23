/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:43:18 by marvin            #+#    #+#             */
/*   Updated: 2023/09/23 18:24:23 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

// #include <stdarg.h>
// #include <string.h>
// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>
// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	if (s == NULL)
// 		return (0);
// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }
// static int	str_size(long num)
// {
// 	int	count;

// 	count = 0;
// 	if (num < 0)
// 	{
// 		num *= -1;
// 		count++;
// 	}
// 	while (num != 0)
// 	{
// 		num /= 10;
// 		count++;
// 	}
// 	return (count);
// }
// static char	*handle_zero(void)
// {
// 	char	*str;

// 	str = malloc(sizeof(char) * 2);
// 	if (str == NULL)
// 		return (NULL);
// 	str[0] = '0';
// 	str[1] = '\0';
// 	return (str);
// }
// char	*ft_itoa(int n)
// {
// 	int		count;
// 	long	num;
// 	char	*str;

// 	num = (long)n;
// 	if (num == 0)
// 		return (handle_zero());
// 	count = str_size(num);
// 	str = malloc(sizeof(char) * (count + 1));
// 	if (str == NULL)
// 		return (NULL);
// 	str[count] = '\0';
// 	if (num < 0)
// 	{
// 		str[0] = '-';
// 		num *= -1;
// 	}
// 	while (num != 0)
// 	{
// 		str[count - 1] = num % 10 + '0';
// 		num /= 10;
// 		count--;
// 	}
// 	return (str);
// }
// void	ft_putstr_fd(char *s, int fd)
// {
// 	int	n;

// 	n = ft_strlen(s);
// 	write(fd, s, n);
// }

int	ft_print_decimal(int num)
{
	int		count;
	char	*str;

	str = ft_itoa(num);
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (count);
}

// int main()
// {
//     printf("%d\n", 2147483648);
//     ft_print_decimal(2147483648);
//     return (0);
// }

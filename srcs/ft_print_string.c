/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:42:10 by marvin            #+#    #+#             */
/*   Updated: 2023/09/23 18:24:15 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

// #include <stdarg.h>
// #include <string.h>
// #include <stdio.h>
// #include <unistd.h>
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
// void	ft_putstr_fd(char *s, int fd)
// {
// 	int	n;

// 	n = ft_strlen(s);
// 	write(fd, s, n);
// }

int	ft_print_string(char *str)
{
	int	count;

	count = ft_strlen(str);
	if (str == NULL)
	{
		count = 6;
		str = "(null)";
	}
	ft_putstr_fd(str, 1);
	return (count);
}

// int main()
// {
//     printf("b%db\n", printf("%s", NULL));
//     printf("d%dd\n", ft_print_string(NULL));
//     return (0);
// }
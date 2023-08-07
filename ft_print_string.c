/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:42:10 by marvin            #+#    #+#             */
/*   Updated: 2023/08/06 09:19:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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

int ft_print_string(char *str)
{
    int count;

    count = ft_strlen(str);
    ft_putstr_fd(str, 1);
    return (count);
}

// int main()
// {
//     printf("%s\n", "asdfg");
//     ft_print_string("asdfg");
//     return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:40:56 by marvin            #+#    #+#             */
/*   Updated: 2023/08/05 22:31:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// #include <stdarg.h>
// #include <string.h>
// #include <stdio.h>
// #include <unistd.h>
// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }

int ft_print_char(char c)
{
    ft_putchar_fd(c, 1);
    return (1);
}

// int main()
// {
//     printf("%c\n", 'a');
//     ft_print_char('a');
//     return 0;
// }

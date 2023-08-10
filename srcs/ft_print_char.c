/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:40:56 by marvin            #+#    #+#             */
/*   Updated: 2023/08/10 22:56:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

// #include <stdarg.h>
// #include <string.h>
// #include <stdio.h>
// #include <unistd.h>
// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }

int ft_print_char(int c)
{
    unsigned char con;

    con = (unsigned char)c;
    ft_putchar_fd(con, 1);
    return (1);
}

// int main()
// {
//     printf("%c\n", 0);
//     printf("\n%d", ft_print_char(0));
//     return 0;
// }

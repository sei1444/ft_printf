/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:42:30 by marvin            #+#    #+#             */
/*   Updated: 2023/09/18 19:07:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

// #include <stdarg.h>
// #include <string.h>
// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>
// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }
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
// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;

// 	if (dstsize == 0)
// 		return (ft_strlen(src));
// 	i = 0;
// 	while (src[i] != '\0' && i < dstsize - 1)
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = '\0';
// 	return (ft_strlen(src));
// }
// int count_elements(int nbr, int basevalue)
// {
//     int count;

//     count = 0;
//     while (nbr > 0)
//     {
//         nbr /= basevalue;
//         count++;
//     }
//     return (count);
// }
// char *ft_putnbr_base(int nbr, char *base)
// {
//     int basevalue;
//     int count;
//     char *ptr;
    
//     basevalue = ft_strlen(base);
//     count = count_elements(nbr, basevalue);
//     ptr = malloc(sizeof(char) * (count + 1));
//     ptr[count] = '\0';
//     while (count > 0)
//     {
//         ptr[count - 1] = base[nbr % basevalue];
//         nbr /= basevalue;
//         count--;
//     }
//     return (ptr);
// }
// void	ft_putstr_fd(char *s, int fd)
// {
// 	int	n;

// 	n = ft_strlen(s);
// 	write(fd, s, n);
// }

int ft_print_pointer(void *ptr)
{
    int count;
    unsigned long long num;
    char base[17];
    char *str;

    
    num = (unsigned long long)ptr;
    if (num == 0)
    {
        ft_putstr_fd("(nil)", 1);
        return (5);
    }
    ft_strlcpy(base, "0123456789abcdef", 17);
    str = ft_putnbr_base(num, base);
    count = ft_strlen(str) + 2;
    ft_putstr_fd("0x", 1);
    ft_putstr_fd(str, 1);
    free(str);
    return (count);
}

// int main()
// {
//     printf("%p\n", 1);
//     ft_print_pointer(1);
//     return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:44:53 by marvin            #+#    #+#             */
/*   Updated: 2023/09/19 11:54:25 by marvin           ###   ########.fr       */
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

int ft_print_hex_lower(unsigned int num)
{
    int count;
    char base[17];
    char *ptr;

    if (num == 0)
    {
        ft_putchar_fd('0', 1);
        return (1);
    }
    ft_strlcpy(base, "0123456789abcdef", 17);
    ptr = ft_putnbr_base(num, base);
    count = ft_strlen(ptr);
    ft_putstr_fd(ptr, 1);
    free(ptr);
    return (count);
}

// int main()
// {
//     printf("%x\n", -255);
//     ft_print_hex_lower(-255);
//     return (0);
// }
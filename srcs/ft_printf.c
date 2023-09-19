/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:49:49 by marvin            #+#    #+#             */
/*   Updated: 2023/09/19 11:56:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int handle_format(const char *format, int *i, va_list ap)
{
    *i = *i + 1;
    if (format[*i] == 'c')
        return ft_print_char(va_arg(ap, int));
    else if (format[*i] == 's')
        return ft_print_string(va_arg(ap, char *));
    else if (format[*i] == 'p')
        return ft_print_pointer(va_arg(ap, void *));
    else if (format[*i] == 'd' || format[*i] == 'i')
        return ft_print_decimal(va_arg(ap, int));
    else if (format[*i] == 'u') 
        return ft_print_unsigned_decimal(va_arg(ap, unsigned int));
    else if (format[*i] == 'x') 
        return ft_print_hex_lower(va_arg(ap, unsigned int));
    else if (format[*i] == 'X') 
        return ft_print_hex_upper(va_arg(ap, unsigned int));
    else if (format[*i] == '%') 
        return ft_print_percent(); 
    return 1;
}

int ft_printf(const char *format, ...)
{
    int count;
    int i;
    va_list ap;
    va_start(ap, format);

    i = 0;
    count = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
            count += handle_format(format, &i, ap);
        else
        {
            ft_putchar_fd(format[i], 1);
            count++;
        }
        i++;
    }
    va_end(ap);
    return (count);
}

// int main()
// {
//     printf("%x\n", 0);
//     printf("%x\n", -1);    
//     ft_printf("%x\n", 0);
//     ft_printf("%x\n", -1);
//     return (0);
// }

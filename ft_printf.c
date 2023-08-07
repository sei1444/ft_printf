/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:49:49 by marvin            #+#    #+#             */
/*   Updated: 2023/08/05 14:57:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int handle_format(const char *format, int *i, va_list ap)
{
    *i = *i + 1;
    if (format[*i] == 'c')
        return process_c(va_arg(ap, char));
    else if (format[*i] == 's')
        return process_s(va_arg(ap, char *));
    else if (format[*i] == 'p')
        return process_p(va_arg(ap, void *));
    else if (format[*i] == 'd' || format[*i] == 'i')
        return process_d(va_arg(ap, int));
    else if (format[*i] == 'u') 
        return process_u(va_arg(ap, unsigned int));
    else if (format[*i] == 'x') 
        return process_x(va_arg(ap, int));
    else if (format[*i] == 'X') 
        return process_X(ap);
    else if (format[*i] == '%') 
        return process_percent(); 
    return ;
}

int ft_printf(const char *format, ...)
{
    int count;
    int i;
    va_list ap;
    va_start(ap, format);

    i = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
            count = handle_format(format, &i, ap);
        else
            write(1, &format[i], 1);
        i++;
    }
    va_end(ap);
    return (0);
}


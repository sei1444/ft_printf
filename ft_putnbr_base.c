/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 23:13:30 by marvin            #+#    #+#             */
/*   Updated: 2023/08/06 00:03:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int count_elements(int nbr, int basevalue)
{
    int count;

    count = 0;
    while (nbr > 0)
    {
        nbr /= basevalue;
        count++;
    }
    return (count);
}

char *ft_putnbr_base(int nbr, char *base)
{
    int basevalue;
    int count;
    char *ptr;
    
    basevalue = ft_strlen(base);
    count = count_elements(nbr, basevalue);
    ptr = malloc(sizeof(char) * (count + 1));
    ptr[count] = '\0';
    if (count > 0)
    {
        ptr[count - 1] = base[nbr % basevalue];
        nbr /= basevalue;
        count--;
    }
    return (ptr);
}

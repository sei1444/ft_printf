/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:06:22 by marvin            #+#    #+#             */
/*   Updated: 2023/08/10 16:00:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int ft_print_char(int c);
int ft_print_decimal(int num);
int ft_print_hex_lower(int num);
int ft_print_hex_upper(int num);
int ft_print_percent();
int ft_print_pointer(void *ptr);
int ft_print_string(char *str);
int ft_print_unsigned_decimal(unsigned int num);
char *ft_putnbr_base(int nbr, char *base);
int ft_printf(const char *, ...);

#endif

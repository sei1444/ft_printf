/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:06:22 by marvin            #+#    #+#             */
/*   Updated: 2023/09/23 18:23:17 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

int		ft_print_char(char c);
int		ft_print_decimal(int num);
int		ft_print_hex_lower(int num);
int		ft_print_hex_upper(int num);
int		ft_print_percent(void);
int		ft_print_pointer(void *ptr);
int		ft_print_string(char *str);
int		ft_print_unsigned_decimal(unsigned int num);
char	*ft_putnbr_base(int nbr, char *base);
int		ft_printf(const char *format, ...);

#endif

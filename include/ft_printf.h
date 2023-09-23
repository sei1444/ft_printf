/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:06:22 by marvin            #+#    #+#             */
/*   Updated: 2023/09/23 18:26:44 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

int		ft_print_char(int c);
int		ft_print_decimal(int num);
int		ft_print_hex_lower(unsigned int num);
int		ft_print_hex_upper(unsigned int num);
int		ft_print_percent(void);
int		ft_print_pointer(void *num);
int		ft_print_string(char *str);
int		ft_print_unsigned_decimal(unsigned int num);
char	*ft_putnbr_base(unsigned long long nbr, char *base);
int		ft_printf(const char *format, ...);

#endif

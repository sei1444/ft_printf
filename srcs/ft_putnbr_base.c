/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 23:13:30 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 18:47:01 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int	count_elements(unsigned long long nbr, int basevalue)
{
	int	count;

	count = 0;
	while (nbr > 0)
	{
		nbr /= basevalue;
		count++;
	}
	return (count);
}

char	*ft_putnbr_base(unsigned long long nbr, char *base)
{
	int		basevalue;
	int		count;
	char	*ptr;

	basevalue = ft_strlen(base);
	count = count_elements(nbr, basevalue);
	ptr = malloc(sizeof(char) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	ptr[count] = '\0';
	while (count > 0)
	{
		ptr[count - 1] = base[nbr % basevalue];
		nbr /= basevalue;
		count--;
	}
	return (ptr);
}

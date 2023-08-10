/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:04:09 by seono             #+#    #+#             */
/*   Updated: 2023/07/16 18:27:48 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cpymemory(unsigned char *d, unsigned char *s, size_t len)
{
	if (d > s)
	{
		d += len - 1;
		s += len - 1;
		while (len > 0)
		{
			*d = *s;
			d--;
			s--;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*d = *s;
			d++;
			s++;
			len--;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d == NULL && s == NULL)
		return (NULL);
	else if (len == 0)
		return (dst);
	cpymemory(d, s, len);
	return (dst);
}

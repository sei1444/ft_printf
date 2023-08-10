/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:05:25 by seono             #+#    #+#             */
/*   Updated: 2023/06/07 15:51:27 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		n;
	char	con;
	char	*str;

	n = ft_strlen(s);
	con = (char)c;
	str = (char *)s;
	str += n;
	while (n >= 0)
	{
		if (*str == con)
			return (str);
		str--;
		n--;
	}
	return (NULL);
}

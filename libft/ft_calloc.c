/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seono <seono@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:07:40 by seono             #+#    #+#             */
/*   Updated: 2023/07/16 15:58:05 by seono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	memorysize;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	memorysize = count * size;
	ptr = malloc(memorysize);
	if (ptr != NULL)
		ft_memset(ptr, '\0', memorysize);
	return (ptr);
}

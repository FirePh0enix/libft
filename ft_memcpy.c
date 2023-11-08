/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:34:05 by ledelbec          #+#    #+#             */
/*   Updated: 2023/11/06 10:34:16 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*sdest;
	const char	*ssrc;

	i = 0;
	sdest = dest;
	ssrc = src;
	while (i < n)
	{
		sdest[i] = ssrc[i];
		i++;
	}
	return (sdest);
}

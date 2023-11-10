/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:33:57 by ledelbec          #+#    #+#             */
/*   Updated: 2023/11/10 13:17:32 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*cdst;
	const char	*csrc = src;
	size_t		i;

	cdst = dest;
	i = 0;
	while (i < n)
	{
		cdst[n - i - 1] = csrc[n - i - 1];
		i++;
	}
	return (dest);
}

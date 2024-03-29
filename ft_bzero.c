/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:35:16 by ledelbec          #+#    #+#             */
/*   Updated: 2024/02/28 11:38:26 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	ft_bzero(void *p, size_t n)
{
	size_t	i;

	i = 0;
	while (n - i >= 8)
	{
		*((uint64_t *)(p + i)) = 0;
		i += 8;
	}
	while (i < n)
	{
		*((char *)p + i) = 0;
		i++;
	}
}

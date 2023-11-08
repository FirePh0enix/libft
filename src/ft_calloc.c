/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:44:57 by ledelbec          #+#    #+#             */
/*   Updated: 2023/11/08 16:42:50 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (n == 0 || size == 0)
		return (malloc(1));
	if ((n | size) >= (size_t) SIZE_MAX / 2)
		return (NULL);
	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, n * size);
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:34:16 by ledelbec          #+#    #+#             */
/*   Updated: 2024/02/01 22:39:25 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	*ft_realloc(void *p, size_t n)
{
	void	*np;

	np = malloc(sizeof(char) * n);
	if (!np)
		return (NULL);
	if (p)
	{
		ft_memcpy(np, p, n);
		free(p);
	}
	return (np);
}


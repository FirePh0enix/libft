/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:34:25 by ledelbec          #+#    #+#             */
/*   Updated: 2023/11/06 10:34:25 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int c, size_t n)
{
	char	*s;
	size_t	i;

	s = p;
	i = 0;
	while (i < n)
	{
		s[i] = (char) c;
		i++;
	}
	return (p);
}

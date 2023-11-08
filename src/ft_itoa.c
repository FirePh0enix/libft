/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:25:27 by ledelbec          #+#    #+#             */
/*   Updated: 2023/11/08 15:50:57 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrev(char *s, int len)
{
	int		i;
	char	c;

	i = 0;
	while (i < (len + 1) / 2)
	{
		c = s[i];
		s[i] = s[len - i];
		s[len - i] = c;
		i++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	un;
	int				i;

	s = malloc(12);
	if (!s)
		return (NULL);
	ft_bzero(s, 12);
	un = n;
	if (n < 0)
		un = -n;
	else if (n == 0)
		ft_memcpy(s, "0", 2);
	i = 0;
	while (un > 0)
	{
		s[i++] = '0' + un % 10;
		un /= 10;
	}
	if (n < 0)
		s[i++] = '-';
	ft_strrev(s, i - 1);
	return (s);
}

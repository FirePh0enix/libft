/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:11:11 by ledelbec          #+#    #+#             */
/*   Updated: 2023/11/08 16:29:01 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static int	is_in_str(char c, const char *s)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

static size_t	trimmed_start(const char *s, const char *set)
{
	size_t	i;

	i = 0;
	while (s[i] && is_in_str(s[i], set))
	{
		i++;
	}
	return (i);
}

static size_t	trimmed_size(const char *s, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	while (s[i] && is_in_str(s[i], set))
	{
		i++;
		len--;
	}
	i = ft_strlen(s);
	while (i > 0 && is_in_str(s[i - 1], set))
	{
		i--;
		len--;
	}
	return (len);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*dst;
	size_t	len;

	len = trimmed_size(s1, set);
	dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s1 + trimmed_start(s1, set), len);
	dst[len] = '\0';
	return (dst);
}

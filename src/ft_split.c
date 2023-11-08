/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:51:08 by ledelbec          #+#    #+#             */
/*   Updated: 2023/11/08 16:28:07 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static int	count_sep(const char *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			count += 1;
		i += 1;
	}
	return (count);
}

static int	offset_until_sep(const char *str, int index, char c)
{
	int	i;

	i = index;
	while (str[i])
	{
		if (str[i] == c)
			break ;
		i += 1;
	}
	return (i);
}

static void	*error(char **res)
{
	while (*res)
	{
		free(*res);
		res++;
	}
	free(res);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	len;
	size_t	i;
	size_t	k;

	res = malloc(sizeof(char *) * (count_sep(s, c) + 2));
	if (!res)
		return (NULL);
	ft_bzero(res, sizeof(char *) * (count_sep(s, c) + 2));
	len = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		k = offset_until_sep(s, i, c);
		if (k > i)
		{
			res[len] = malloc(k - i + 1);
			if (!res[len])
				return (error(res));
			ft_memcpy(res[len], s + i, k - i);
			res[len++][k - i] = '\0';
		}
		i = k + 1;
	}
	return (res);
}

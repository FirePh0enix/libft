/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:41:59 by ledelbec          #+#    #+#             */
/*   Updated: 2023/11/07 11:07:46 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	big_len;
	size_t	little_len;
	size_t	index;

	if (*little == 0)
		return ((char *)big);
	index = 0;
	big_len = ft_strlen(big);
	little_len = ft_strlen(little);
	while (big[index] && index < big_len - little_len + 1 && index < n)
	{
		if (ft_strncmp(big + index, little, little_len) == 0)
			return ((char *)big + index);
		index++;
	}
	return ((char *)0);
}

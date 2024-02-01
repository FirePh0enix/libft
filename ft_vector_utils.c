/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:23:51 by ledelbec          #+#    #+#             */
/*   Updated: 2024/02/01 23:24:16 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_vector_size(void *vec)
{
	return (((t_vecdata *)vec)->size);
}

void	ft_vector_free(void *vec)
{
	free(vec - sizeof(t_vecdata));
}

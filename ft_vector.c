/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:57:13 by ledelbec          #+#    #+#             */
/*   Updated: 2024/04/25 17:23:14 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_vector(size_t el_size, size_t capacity)
{
	t_vecdata	*data;

	if (capacity == 0)
		capacity = 1;
	data = malloc(sizeof(t_vecdata) + capacity * el_size);
	if (!data)
		return (NULL);
	data->el_size = el_size;
	data->capacity = capacity;
	data->size = 0;
	return (data + 1);
}

void	*ft_vector_add(void *_vec, void *elp)
{
	t_vecdata	*vec_data;
	void		**vec;

	if (!_vec)
		return (NULL);
	vec = _vec;
	vec_data = (void *)(*vec - sizeof(t_vecdata));
	if (vec_data->size == vec_data->capacity)
	{
		if (vec_data->capacity == 0)
			vec_data->capacity = 1;
		vec_data = ft_realloc(vec_data,
				sizeof(t_vecdata) + vec_data->capacity * vec_data->el_size,
				sizeof(t_vecdata) + vec_data->capacity * vec_data->el_size * 2);
		if (!vec_data)
			return (NULL);
		vec_data->capacity *= 2;
		*vec = ((void *)vec_data) + sizeof(t_vecdata);
	}
	ft_memcpy(*vec + vec_data->size * vec_data->el_size, elp,
		vec_data->el_size);
	vec_data->size++;
	return (vec_data + sizeof(t_vecdata));
}

void	ft_vector_del(void *_vec, size_t index)
{
	t_vecdata	*vec_data;
	void		**vec;

	vec = _vec;
	vec_data = (void *)(*vec - sizeof(t_vecdata));
	if (index + 1 < vec_data->size)
	{
		ft_memcpy(*vec + index * vec_data->el_size,
			*vec + (index + 1) * vec_data->el_size,
			(vec_data->size - index - 1) * vec_data->el_size);
	}
	else
	{
		ft_memset(*vec + index * vec_data->el_size, 0, vec_data->el_size);
	}
	vec_data->size--;
}

void	ft_vector_del_swap(void *_vec, size_t index)
{
	t_vecdata	*vec_data;
	void		**vec;

	vec = _vec;
	vec_data = (void *)(*vec - sizeof(t_vecdata));
	ft_memcpy(*vec + index * vec_data->el_size,
		*vec + (vec_data->size - 1) * vec_data->el_size,
		vec_data->el_size);
	vec_data->size--;
}

void	ft_vector_clear(void *vec)
{
	t_vecdata	*vec_data;

	if (!vec)
		return ;
	vec_data = (void *)(vec - sizeof(t_vecdata));
	vec_data->size = 0;
}

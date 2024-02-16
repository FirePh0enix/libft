/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 01:10:07 by ledelbec          #+#    #+#             */
/*   Updated: 2024/02/16 12:37:48 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "printf_int.h"
#include <unistd.h>

static int	_printf_write(t_writer *w, const char *s, int len)
{
	(void) w;
	return (write(1, s, len));
}

int	ft_printf(const char *fmt, ...)
{
	int		n;
	va_list	list;

	va_start(list, fmt);
	n = format(fmt, list, (t_writer){_printf_write, NULL});
	va_end(list);
	return (n);
}

static int	_sprintf_write(t_writer *w, const char *s, int len)
{
	ft_memcpy(w->p, s, len);
	w->p += len;
	return (len);
}

int	ft_sprintf(char *buf, const char *fmt, ...)
{
	int		n;
	va_list	list;

	va_start(list, fmt);
	n = format(fmt, list, (t_writer){_sprintf_write, buf});
	va_end(list);
	return (n);
}

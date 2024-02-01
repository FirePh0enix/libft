/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:59:36 by ledelbec          #+#    #+#             */
/*   Updated: 2024/02/01 20:15:16 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

typedef struct s_fmt {
	int	prefix;
	int	sign;
	int	space;
	int	min_width;
	int	left_align;
	int	pad_zero;
}	t_fmt;

# define DEC "0123456789"
# define HEX_L "0123456789abcdef"
# define HEX_U "0123456789ABCDEF"

int		ft_printf(const char *fmt, ...);

int		write_int(va_list list, char **s, t_fmt *fmt);
int		write_str(char *s);
int		isflag(char c);

int		printf_atoi(char **s);

int		write_pad_signed_right(t_fmt *fmt, int len, int v);
int		write_pad_signed_left(t_fmt *fmt, int len, int v);
int		write_pad_right(t_fmt *fmt, int len);
int		write_pad_left(t_fmt *fmt, int len);

#endif

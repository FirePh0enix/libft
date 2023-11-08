/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:28:58 by ledelbec          #+#    #+#             */
/*   Updated: 2023/11/08 15:39:42 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *s)
{
	int	sign;
	int	value;

	while (*s == ' ' || *s == '\n' || *s == '\t'
		|| *s == '\f' || *s == '\v' || *s == '\r')
		s++;
	sign = 1;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	value = 0;
	while (*s >= '0' && *s <= '9')
	{
		value = value * 10 + (*s - '0');
		s++;
	}
	return (value * sign);
}

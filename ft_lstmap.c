/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledelbec <ledelbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:59:03 by ledelbec          #+#    #+#             */
/*   Updated: 2023/11/10 14:42:47 by ledelbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dup;
	t_list	*cur;
	t_list	*last;

	dup = NULL;
	last = NULL;
	while (lst)
	{
		cur = ft_lstnew(f(lst->content));
		if (!cur)
		{
			ft_lstclear(&dup, del);
			return (NULL);
		}
		if (dup == NULL)
			dup = cur;
		if (last)
			last->next = cur;
		lst = lst->next;
		last = cur;
	}
	return (dup);
}

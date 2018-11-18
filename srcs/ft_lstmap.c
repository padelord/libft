/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 23:27:10 by padelord          #+#    #+#             */
/*   Updated: 2018/11/18 23:27:11 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*dest;

	dest = 0;
	while (lst)
	{
		if (!(new = f(lst)))
			return (0);
		ft_lstadd(&dest, new);
		lst = lst->next;
	}
	return (dest);
}

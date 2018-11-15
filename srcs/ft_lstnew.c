/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 20:12:31 by padelord          #+#    #+#             */
/*   Updated: 2018/11/10 20:12:33 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*dest;

	dest = (t_list *)ft_memalloc(sizeof(*dest));
	if (!(dest->content = ft_memdup(content, content_size)))
		return (0);
	dest->content_size = content_size;
	dest->next = 0;
	return (dest);
}


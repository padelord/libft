/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 23:59:21 by padelord          #+#    #+#             */
/*   Updated: 2018/12/03 03:31:40 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpback(t_list **alst, t_list *new)
{
	t_list	*l;

	if (*alst == 0)
	{
		*alst = new;
		return ;
	}
	l = *alst;
	while (l->next)
		l = l->next;
	l->next = new;
}

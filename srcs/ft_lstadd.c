/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 23:26:35 by padelord          #+#    #+#             */
/*   Updated: 2018/11/18 23:26:38 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*t;

	if (*alst == 0)
	{
		*alst = new;
		(*alst)->next = 0;
		return ;
	}
	t = *alst;
	while (t->next)
		t = t->next;
	t->next = new;
}

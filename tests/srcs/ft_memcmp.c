/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 23:05:23 by padelord          #+#    #+#             */
/*   Updated: 2018/11/08 03:33:19 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*
{
	size_t			i;
	unsigned char	*t1;
	unsigned char	*t2;

	if (!s1 || !s2)
		return (0);
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	i = 0;
	while (i < n && t1[i] == t2[i])
		i++;
	return (t1[i] - t2[i]);
}
*/

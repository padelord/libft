/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 20:13:11 by padelord          #+#    #+#             */
/*   Updated: 2018/11/10 20:13:14 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memdup(const void *src, size_t n);
/*
{
	void	*dst;

	if (!(dst = ft_memalloc(n)))
		return (0);
	ft_memcpy(dst, src, n);
	return (dst);
}
*/

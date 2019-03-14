/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 03:24:01 by padelord          #+#    #+#             */
/*   Updated: 2018/11/19 02:59:22 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static void	*ft_intmemset(void *b, int c, size_t len)
{
	unsigned int	*t;

	t = (unsigned int*)b;
	while (len-- > 0)
		*t++ = c;
	return (b);
}
*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*t;

	t = (unsigned char *)b;
	while (len-- > 0)
		t[len] = (unsigned char)c;
	return (b);
}

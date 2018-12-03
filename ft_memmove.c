/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 19:03:58 by padelord          #+#    #+#             */
/*   Updated: 2018/11/19 02:09:02 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tdst;
	unsigned char	*tsrc;

	tdst = (unsigned char *)dst;
	tsrc = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (src < dst && src + len > dst)
	{
		while (len-- > 0)
			tdst[len] = tsrc[len];
	}
	else
		dst = ft_memcpy(dst, src, len);
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 23:56:43 by padelord          #+#    #+#             */
/*   Updated: 2018/11/11 17:11:16 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size);
/*
{
	size_t	i;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	i = 0;
	while (i + len_dst < size - 1 && src[i])
    {
		dst[len_dst + i] = src[i];
		i++;
    }
	dst[len_dst + i] = '\0';
	return ((size < len_dst) ? ft_strlen(src) + size : len_dst + ft_strlen(src));
}
*/

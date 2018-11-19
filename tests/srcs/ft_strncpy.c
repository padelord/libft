/* PART I */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 00:46:33 by padelord          #+#    #+#             */
/*   Updated: 2018/11/19 00:12:10 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len);
/*
{
	size_t	i;

	if (!src || !dst)
		return (0);
	i = 0;
	while (i < len && src[i])
    {
		dst[i] = src[i];
		i++;
    }
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}
*/

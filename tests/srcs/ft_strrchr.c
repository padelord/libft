/* PART I */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 00:14:05 by padelord          #+#    #+#             */
/*   Updated: 2018/11/19 00:14:06 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c);
/*
{
	size_t	i;

	i = ft_strlen(s);
	while (--i > 0)
    {
		if ((unsigned char)(s[i]) == c)
			return ((char *)s + i);
    }
	return (0);
}
*/

/* PART I */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 00:14:17 by padelord          #+#    #+#             */
/*   Updated: 2018/11/19 00:14:22 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
static int	ft_findneedle(char *haystack, const char *needle)
{
	size_t	i;

	i = 0;
	while (needle[i] && haystack[i] == needle[i])
		i++;
	if (needle[i])
		return (0);
	return (1);
}
*/
char	*ft_strstr(const char *haystack, const char *needle);
/*
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(needle);
	if (len < ft_strlen(haystack))
		return (0);
	while (haystack[i + len - 1])
    {
		if (ft_findneedle(((char *)haystack + i), needle))
			return ((char *)haystack + i);
		i++;
    }
	return (0);
}
*/

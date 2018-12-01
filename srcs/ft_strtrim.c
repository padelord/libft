/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 23:31:21 by padelord          #+#    #+#             */
/*   Updated: 2018/11/18 23:49:04 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		size;
	char		*dest;

	while (*s && ft_iswspace(*s))
		s++;
	if ((size = ft_strlen(s)) == 0)
	  return (ft_strnew(0));
	while (ft_iswspace(*(s + (--size))))
	  ;
	size++;
	if (!(dest = ft_strnew(size)))
		return (0);
	ft_strncpy(dest, s, size);
	return (dest);
}

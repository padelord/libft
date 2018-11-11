/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_staticitoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 20:29:48 by padelord          #+#    #+#             */
/*   Updated: 2018/11/10 23:17:24 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_staticitoa(int nb)
{
	static char	dest[12];
	size_t	i;
	unsigned int	n;

	n = ((nb < 0) ? -nb : nb);
	i = 0;
	while (n > 0)
    {
		dest[i++] = n % 10 + '0';
		n /= 10;
    }
	if (nb < 0)
		dest[i++] = '-';
	if (nb == 0)
		dest[i++] = '0';
	dest[i] = '\0';
	return (ft_strrev(dest));  
}


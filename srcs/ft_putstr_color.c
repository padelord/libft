/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 23:58:46 by padelord          #+#    #+#             */
/*   Updated: 2018/11/19 00:59:55 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_color(const char *str, const char *attr, const char *fg,
						const char *bg)
{
	char	buffer[39];

	buffer[0] = '\0';
	ft_strcat(buffer, "\e[");
	ft_strcat(buffer, attr);
	ft_strcat(buffer, ";38;2;");
	ft_strcat(buffer, fg);
	ft_strcat(buffer, ";48;2;");
	ft_strcat(buffer, bg);
	ft_strcat(buffer, "m");
	ft_putstr(buffer);
	ft_putstr(str);
	ft_putstr("\e[0;39;49m");
}

int		ft_minmax(int min, int max, int n)
{
	if (min > max)
		return (n);
	if (n < min)
		return (min);
	if (n > max)
		return (max);
	return (n);
}

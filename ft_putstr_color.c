/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 23:58:46 by padelord          #+#    #+#             */
/*   Updated: 2018/12/03 03:27:57 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar_color(const char c, const char *attr, const char *fg,
						 const char *bg)
{
	char	buffer[49];

	ft_memcpy(buffer, "\e[0;38;2;000;000;000;48;2;000;000;000mc\e[0;39;49m", 50);
	ft_memcpy(buffer + 2, attr, 1);
	ft_memcpy(buffer + 9, fg, 11);
	ft_memcpy(buffer + 26, bg, 11);
	buffer[38] = c;
	ft_memcpy(buffer + 39, "\e[0;39;49m", 10);
	write(1, buffer, 49);
}

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

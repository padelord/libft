/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 23:58:46 by padelord          #+#    #+#             */
/*   Updated: 2018/11/10 23:58:48 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_color(char *str, const char *attr, const char *fg, const char *bg);
/*
{
	char	buffer[39];

	ft_bzero(buffer, 39);
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
*/

void	ft_putendl_color(char *str, const char *attr, const char *fg, const char *bg);
/*
{
	ft_putstr_color(str, attr, fg, bg);
	ft_putchar('\n');
}
*/

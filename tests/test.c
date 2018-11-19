/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 02:28:22 by padelord          #+#    #+#             */
/*   Updated: 2018/11/19 08:56:08 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	ft_putendl(ft_staticitoa(ft_strcmp("abc", "abd")));
	ft_putendl(ft_staticitoa(strcmp("abc", "abd")));
	ft_putendl(ft_staticitoa(ft_strcmp("\200", "\0")));
	ft_putendl(ft_staticitoa(strcmp("\200", "\0")));
}

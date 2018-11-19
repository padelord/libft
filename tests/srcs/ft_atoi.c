/*PART I*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 00:57:22 by padelord          #+#    #+#             */
/*   Updated: 2018/11/19 02:52:09 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include "libft.h"

int		ft_atoi(const char *str);

void	test_atoi()
{
	char	*sintmin = "-2147483648";
	char	*sintmax = "2147483647";
	char	*szero = "0";
	char	*smille = "1000";
	char	*serr = "-+12";
	int		sys;
	int		use;

	sys = ft_atoi(sintmin);
	use = ft_atoi(sintmin);
	if (use == sys)
		printf("ok sur %d\n", use);
	else
		printf("KO! %d != %d\n", sys, use);
	sys = ft_atoi(sintmax);
	use = ft_atoi(sintmax);
	if (use == sys)
		printf("ok sur %d\n", use);
	else
		printf("KO! %d != %d\n", sys, use);
	sys = ft_atoi(szero);
	use = ft_atoi(szero);
	if (use == sys)
		printf("ok sur %d\n", use);
	else
		printf("KO! %d != %d\n", sys, use);
	sys = ft_atoi(smille);
	use = ft_atoi(smille);
	if (use == sys)
		printf("ok sur %d\n", use);
	else
		printf("KO! %d != %d\n", sys, use);
	sys = ft_atoi(serr);
	use = ft_atoi(serr);
	if (use == sys)
		printf("ok sur %d\n", use);
	else
		printf("KO! %d != %d\n", sys, use);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 01:40:23 by padelord          #+#    #+#             */
/*   Updated: 2018/11/08 02:49:48 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int ac, char **av)
{
	char	*str;

	str = ft_strdup("coucou");
	ft_putendl(str);
	free(str);
/*	char	*str;
	char	*ptr;

	str = malloc(10);
	ptr = "deux";
	memset(str, 'a', 9);
	str[9] =  '\0';
	ft_strcpy(str, ptr);
	write(1, str, 10);


	if ((ptr = ft_memset(str, 'q', 5)))
		ft_putendl(str);
	ft_putendl(ptr);
	free(str);
/*
	char dest[] = "oldstring";
	const char src[]  = "newstring";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	memmove(dest, src, 9);
	printf("After memmove dest = %s, src = %s\n", dest, src);

	char udest[] = "oldstring";
	const char usrc[]  = "newstring";

	printf("Before memmove dest = %s, src = %s\n", udest, usrc);
	ft_memmove(udest, usrc, 9);
	printf("After memmove dest = %s, src = %s\n", udest, usrc);

	return(0);
*/
	
}

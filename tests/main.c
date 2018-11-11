/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 01:40:23 by padelord          #+#    #+#             */
/*   Updated: 2018/11/12 00:12:16 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

typedef	struct	s_termc
{
  int		r;
  int		v;
  int		b;  
}		t_termc;

void	ft_putnchar(char c, size_t len)
{
	char	buff[BUFF_SIZE];

	memset(buff, c, BUFF_SIZE);
	while (len > 0)
		len -= write(1, buff, ((len > BUFF_SIZE) ? BUFF_SIZE : len));
}

int	main(int ac, char **av)
{
	char	*str;
	char	s[44];
	size_t		i;

	ft_memset(s, 'a', 44);
	ft_strcpy(s, "salut");
	i = strlcat(s, "coucou", 7);
	write(1, s, 44);
	ft_putchar('\n');
	ft_putendl(s);
	ft_putnbr((int)i);
	ft_putchar('\n');
/*
	if (ac == 2)
	  str = ft_strdup(av[1]);
	else
	  str = ft_strdup("coucou");
	ft_putendl_color("BLACK", C_RESET, C_BLACK, C_WHITE);
	ft_putendl_color("WHITE", C_RESET, C_WHITE, C_BLACK);
	ft_putendl_color("RED", C_RESET, C_RED, C_BLACK);
	ft_putendl_color("GREEN", C_RESET, C_GREEN, C_BLACK);
	ft_putendl_color("BLUE", C_RESET, C_BLUE, C_BLACK);
	ft_putendl_color("GIRLY", C_RESET, C_GIRLY, C_BLACK);
	ft_putendl_color("YELLOW", C_RESET, C_YELLOW, C_BLACK);
	ft_putendl_color("PINK", C_RESET, C_PINK, C_BLACK);
	ft_putendl_color("CYAN", C_RESET, C_CYAN, C_BLACK);
	ft_putendl_color("RANDOM", C_ITALIC, C_BLACK, C_GIRLY);
	ft_strrev(str);
	ft_putendl(str);
	free(str);
	nb = -512;
	if (ac == 2)
	  nb = ft_atoi(av[1]);
	str = ft_itoa(nb);
	ft_putendl(str);
	ft_putnbr(nb);
	ft_putendl("");
	free(str);
	ft_putendl(ft_staticitoa(nb));
}
	
	if (ac < 2)
		return (1);
	ft_putendl(ft_staticitoa(i));
*/
}

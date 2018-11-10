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

#include <stdlib.h>
#include "libft.h"
/*
#ifndef C_DATA
# define C_DATA

# define C_BLACK "0;0;0"
# define C_WHITE "255;255;255"
# define C_RED "255;0;0"
# define C_GREEN "0;255;0"
# define C_BLUE "0;0;255"
# define C_GIRLY "255;125;200"
# define C_YELLOW "255;255;0"
# define C_PINK "255;0;255"
# define C_CYAN "0;255;255"
# define C_RANDOM "0;255;255"

# define C_RESET "0"
# define C_BOLD "1"
# define C_FAINT "2"
# define C_ITALIC "3"
# define C_ULINE "4"
# define C_BLINK "5"

#endif
*/
typedef	struct	s_termc
{
  int		r;
  int		v;
  int		b;  
}		t_termc;

void	ft_putstr_color(char *str, const char *attr, const char *fg, const char *bg);
void	ft_putendl_color(char *str, const char *attr, const char *fg, const char *bg);



int	main(int ac, char **av)
{
	char	*str;
	int	nb;
	
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
	ft_putendl_color("RANDOM", C_BLINK, C_BLACK, C_GIRLY);
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

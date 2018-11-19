/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 01:40:23 by padelord          #+#    #+#             */
/*   Updated: 2018/11/19 01:09:52 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

typedef int	t_vec3 __attribute__
((ext_vector_type(3)));

void	ft_wtabdel(char **tab)
{
  size_t	i;

  if (tab == 0)
	  return ;
  i = 0;
  while (tab[i])
    {
      ft_strdel(tab + i);
      i++;
    }
  free(tab);
}

void	ft_print_wtab(char **tab)
{
	while (*tab)
		ft_putendl(*tab++);
}
/*
char	*ft_getfile(char *path)
{
	int	fd;
	char	buffer[BUFF_SIZE];
	size_t	size;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (0);
	
}
*/

void	ft_termclr()
{
	ft_putstr("\033[2J");
}

void	ft_cursmove(size_t x, size_t y)
{
	char	*buffer[25];

	*buffer = 0;
	ft_strcat((char *)buffer, "\e[");
	ft_strcat((char *)buffer, ft_staticitoa(x));
	ft_strcat((char *)buffer, ";");
	ft_strcat((char *)buffer, ft_staticitoa(y));
	ft_strcat((char *)buffer, "f");
	ft_putstr((char *)buffer);
}

int	main(int ac, char **av)
{
	t_vec3	point;

	point = 0;
	point.x = 1;
	point.z = -1;
	ft_putendl("avant");
	ft_putnbr(point.x);
	ft_putchar('\n');
	ft_putnbr(point.y);
	ft_putchar('\n');
	ft_putnbr(point.z);
	ft_putchar('\n');
	point *= 2;
	ft_putendl("apres");
	ft_putnbr(point.x);
	ft_putchar('\n');
	ft_putnbr(point.y);
	ft_putchar('\n');
	ft_putnbr(point.z);
	ft_putchar('\n');
	ft_termclr();
	ft_cursmove(2, 2);
	ft_putstr("\e[0;38;2;000;000;000;48;2;125;125;125;m");
	ft_putnchar(' ', 42);
	ft_putstr("\e[0;39;49m");
	ft_cursmove(3, 2);
	ft_putstr("\e[0;38;2;000;000;000;48;2;125;125;125;m");
	ft_putchar(' ');
	ft_putstr("\e[0;38;2;000;000;000;48;2;000;200;000;m");
	ft_putnchar(' ', 40);
	ft_putstr("\e[0;38;2;000;000;000;48;2;125;125;125;m");
	ft_putchar(' ');
	ft_putstr("\e[0;39;49m");
	ft_cursmove(4, 2);
	ft_putstr("\e[0;38;2;000;000;000;48;2;125;125;125;m");
	ft_putnchar(' ', 42);
	ft_putstr("\e[0;39;49m");
	ft_putchar('\n');
/*
	ft_cursmove(10, 40);
	ft_putnbr(10);
	ft_putstr(" : ");
	ft_putnbr(40);
	if (ac < 2)
		return (0);
	char	**tab;

	tab = ft_strsplit(av[1], ' ');
	ft_print_wtab(tab);
	ft_wtabdel(tab);
*/
}

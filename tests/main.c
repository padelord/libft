/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 01:40:23 by padelord          #+#    #+#             */
/*   Updated: 2018/11/12 00:12:16 by padelord         ###   ########.fr       */
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
	ft_strcat((char *)buffer, "\033[");
	ft_strcat((char *)buffer, ft_staticitoa(x));
	ft_strcat((char *)buffer, ";");
	ft_strcat((char *)buffer, ft_staticitoa(y));
	ft_strcat((char *)buffer, "H");
	ft_putstr((char *)buffer);
}

int	main(int ac, char **av)
{
	char	**tab;

	t_vec3	point;

	point = 0;
	point.x = 1;
	point.z = -1;
	point *= 2;
	ft_putnbr(point.x);
	ft_putchar('\n');
	ft_putnbr(point.y);
	ft_putchar('\n');
	ft_putnbr(point.z);
	ft_putchar('\n');
/*
	ft_cursmove(10, 40);
	ft_putnbr(10);
	ft_putstr(" : ");
	ft_putnbr(40);
	if (ac < 2)
		return (0);
	tab = ft_strsplit(av[1], ' ');
	ft_print_wtab(tab);
	ft_wtabdel(tab);
*/
}

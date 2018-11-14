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

size_t	ft_min(size_t n1, size_t n2)
{
  return ((n1 < n2) ? n1 : n2);
}

void	ft_putnchar(char c, size_t len)
{
  char	buff[BUFF_SIZE];

  memset(buff, c, BUFF_SIZE);
  while (len > 0)
    len -= write(1, buff, ((len > BUFF_SIZE) ? BUFF_SIZE : len));
}

void	ft_putnstr(const char *str, size_t n)
{
  write(1, str, (ft_strlen(str) < n) ? ft_strlen(str) : n);
}

void	ft_wtabdel(char **tab)
{
  size_t	i;

  i = 0;
  while (tab[i])
    {
      ft_strdel(tab + i);
      i++;
    }
  free(tab);
}

int	main(int ac, char **av)
{
  char	**tab;
  size_t	i;

  if (ac < 2)
    return (1);
  if (!(tab = ft_strsplit(av[1], ' ')))
    return (0);
  i = 0;
  while (tab[i])
    ft_putendl(tab[i++]);
  ft_wtabdel(tab);
  /*
    t_list	*buffer;

  buffer = ft_lstnew("coucou", 6);
  ft_lstadd(&buffer, ft_lstnew("salut", 5));
  ft_putendl(

  str = ft_strmap("Coucou", ft_toupper);
  ft_putendl(str);
  free(str);
  str = ft_strsub("Salut les copains", 6, 3);
  ft_putendl(str);
  free(str);
  str = ft_strtrim("     Coucou les copains     ");
  ft_putendl(str);
  free(str);
  */
}

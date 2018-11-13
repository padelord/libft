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

int	main(int ac, char **av)
{
  char	*str;

  str = ft_strmap("Coucou", ft_toupper);
  ft_putendl(str);
}

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

#include <limits.h>
#include "libft.h"

int		main(int ac, char **av)
{
  if (ac == 2)
    printf("sys:%d\nusr:%d\n", atoi(av[1]), ft_atoi(av[1]));
  else
    printf("sys:%ld\n", LONG_MAX);
  //9223372036854775807
  /*
  static char buff[] = "abcd";

  if (ft_strrchr(buff, 'a') == buff)
    ft_putendl("yeah");
  else
    ft_putendl(ft_strrchr(buff, 'a'));
  */
  /*
  char	*buff;

  buff = strdup("un deux 9");
  *(buff + 1) = 0;
  ft_putendl(strnstr(buff, "", 6));
  */
  /*
  ft_putnbr(ft_strncmp("abc", "abcde", 3));
  ft_putendl("");
  ft_putnbr(strncmp("abc", "abcde", 3));
  ft_putendl("");
  ft_putnbr(ft_strncmp("abc", "abcde", 3));
  ft_putendl("");
  ft_putnbr(strncmp("abc", "abcde", 3));
  ft_putendl("");
  */
  /*
  char	*ubuff;
  char	*sbuff;
  char	*st;
  char	*ut;

  ubuff = ft_strnew(50);
  sbuff = ft_strnew(50);
  if (!ubuff)
    return (1);
  if (!sbuff)
    return (1);
  ft_strcpy(ubuff, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
  ft_strcpy(sbuff, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
  ft_putendl(sbuff);
  ft_putendl(ubuff);
  strcpy(ubuff, "to be ");
  strcpy(sbuff, "to be ");
  ft_putendl(sbuff);
  ft_putendl(ubuff);
  st = strncat(sbuff, "or not to be", 6);
  ut = ft_strncat(ubuff, "or not to be", 6);
  ft_putendl(st);
  ft_putendl(ut);
  free(ubuff);
  free(sbuff);
  */
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 02:28:22 by padelord          #+#    #+#             */
/*   Updated: 2018/12/03 03:27:12 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

typedef int t_vec3 __attribute__ ((ext_vector_type(5)));

int		main(int ac, char **av)
{
	t_vec3	point;
	t_vec3	point2;

	point.x = 2;
	point.y = 0;
	point.z = -3;
	point.w = 50;

	point2.x = 22;
	point2.y = 0;
	point2.z = -13;

	ft_putstr_color("coucou", "1", "0;0;255", "255;0;0");
	ft_putnbr(point.x);
	ft_putendl("x");
	ft_putnbr(point.y);
	ft_putendl("y");
	ft_putnbr(point.z);
	ft_putendl("z");
	ft_putnbr(point.w);
	ft_putendl("w");

	point += point2;

	ft_putnbr(point.x);
	ft_putendl("x");
	ft_putnbr(point.y);
	ft_putendl("y");
	ft_putnbr(point.z);
	ft_putendl("z");
	
/*
	char	*str;

	str = ft_strdup("coucou");
	ft_striter(str, 0);
	ft_strdel(&str);
*/
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

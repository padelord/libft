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

//#include <limits.h>
#include "libft.h"

typedef int t_vec3 __attribute__ ((ext_vector_type(3)));

int		main(int ac, char **av)
{
  /*
    void	*ft_memdup(const void *src, size_t n);
    alloue avec malloc() un void* puis le remplis avec le contenu de src
    renvoie NULL si malloc echoue
    si src est null la fonction creera un segfault
  */
  void	*t1;
  void	*t2;

  t1 = ft_memdup((void*)"coucou", 6);
  t2 = ft_memdup((void*)"coucou", 6);
  write(1, t1, 6);
  ft_putchar('\n');
  write(1, t2, 6);
  free(t1);
  free(t2);

  /*
    void	ft_wtabdel(char **tab);
    supprime proprement un (char **) cree par ft_strsplit()
   */
  char	**tab;

  tab = ft_strsplit("coucou les copains comment ca va?", 'c');
  ft_wtabdel(tab);
  

  /*


void	ft_cswap(char *a, char *b);
swap 2 caracteres dont on envoie les adresses

char	*ft_strrev(char *str);
renvoie la chaine de caractere a l'envers

char	*ft_staticitoa(int nb);
fonctionne comme ft_itoa mais reserve une zone memoire de 12 octet pour stocker
temporairement le nombre a recuperer.
/!\Le buffer de ft_static_itoa est modifie a chaque apel de la fonction/!\

int		ft_isspace(int c);
fonctionne comme la fonction systeme isspace()
int		ft_iswspace(int c);
Revoie un nombre positif si c correspond a un whitespace

size_t	ft_min(size_t n1, size_t n2);
Renvoie le plus petit nombre entre n1 et n2

void	ft_putnbrendl(int nb);
affiche un nombre sur la sortie standard suivi d'un retour a la ligne

void	ft_putnchar(char c, size_t len);
affiche len fois le caractere c

void	ft_putnstr(const char *str, size_t n);
affiche les n premiers caracteres de str, si str fait moins de n caracteres, affiche str

void	ft_putstr_color(const char *str, const char *attr, const char *fg, const char *bg);
affiche la chaine de caractere envoye en parametre en utilisant les attributs definis dans libft.h

void	ft_putendl_color(const char *str, const char *attr, const char *fg, const char *bg);
comme ft_putstr_color() suivi d'un \n

void	ft_lstpback(t_list **alst, t_list *new);
ajoute l'element new en bout de la liste pointee par **alst

   */
  /*
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
  */
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

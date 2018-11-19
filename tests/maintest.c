/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 02:28:22 by padelord          #+#    #+#             */
/*   Updated: 2018/11/19 07:43:38 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	void	*vs;
	void	*rs;
	void	*vu;
	void	*ru;

	int		is;
	int		iu;

	vs = malloc(50);
	vu = malloc(50);
	if (!vs || !vu)
		return (0);

	bzero(vs, 50);
	ft_bzero(vu, 50);

	ft_putendl("bzero :");
	ft_putstr("sys : ");
	ft_putendl((char *)vs);
	ft_putstr("usr : ");
	ft_putendl((char *)vu);

	vs = memset(vs, 'c', 49);
	vu = ft_memset(vu, 'c', 49);

	ft_putendl("memset :");
	ft_putstr("sys : ");
	ft_putendl((char *)vs);
	ft_putstr("usr : ");
	ft_putendl((char *)vu);

	vs = memcpy(vs, "Coucou", 6);
	vu = ft_memcpy(vu, "Coucou", 6);

	ft_putendl("memcpy :");
	ft_putstr("sys : ");
	ft_putendl((char *)vs);
	ft_putstr("usr : ");
	ft_putendl((char *)vu);

	rs = memccpy(vs, "Salut\nles\ncopains\n", '\n', 18);
	ru = ft_memccpy(vu, "Salut\nles\ncopains\n", '\n', 18);

	ft_putendl("memccpy :");
	ft_putendl("p :");
	ft_putstr("sys : ");
	ft_putendl((char *)vs);
	ft_putstr("usr : ");
	ft_putendl((char *)vu);
	ft_putendl("ret :");
	ft_putstr("sys : ");
	ft_putendl((char *)rs);
	ft_putstr("usr : ");
	ft_putendl((char *)ru);
	
	rs = ft_memmove(vs + 5, vs, 5);
	ru = ft_memmove(vu + 5, vu, 5);

	ft_putendl("memmove :");
	ft_putendl("p :");
	ft_putstr("sys : ");
	ft_putendl((char *)vs);
	ft_putstr("usr : ");
	ft_putendl((char *)vu);
	ft_putendl("ret :");
	ft_putstr("sys : ");
	ft_putendl((char *)rs);
	ft_putstr("usr : ");
	ft_putendl((char *)ru);

	is = ft_memcmp(vs, (void*) "Salow", 5);
	iu = memcmp(vu, (void*) "Salow", 5);
	
	ft_putendl("memcmp :");
	ft_putstr("sys : ");
	ft_putnbr(is);
	ft_putchar('\n');
	ft_putstr("usr : ");
	ft_putnbr(iu);
	ft_putchar('\n');

	free(vs);
	free(vu);
	
}

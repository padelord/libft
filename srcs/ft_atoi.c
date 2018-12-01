/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 00:57:22 by padelord          #+#    #+#             */
/*   Updated: 2018/11/18 23:32:11 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_istoolong(char *n)
{
  int	i;
  int	sign;
  int	len;

  i = 0;
  sign = 1;
  if (n[i] == '-' || n[i] == '+')
    sign = 44 - n[i++];
  while (ft_isdigit(n[i]))
    i++;
  n[i] = 0;
  if ((len = ft_strlen(n + ((n[0] == '-' || n[0] == '+') ? 1 : 0))) != 19)
    return ((len > 19) ? 1 : 0);
  if (sign > 0)
    {
      if (ft_strcmp(n, "9223372036854775807") > 0)
	return (1);
    }
  else
    if (ft_strcmp(n, "9223372036854775808") < 0)
      return (1);
  return (0);
}

int		ft_atoi(const char *str)
{
	size_t			i;
	int				sign;
	unsigned int	nb;

	i = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
		sign = 44 - str[i++];
	if (ft_istoolong((char *)(str + i)))
	  return (((sign == -1) ? 0 : -1));
	nb = 0;
	while (str[i] && ft_isdigit(str[i]))
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return ((int)(nb * sign));
}

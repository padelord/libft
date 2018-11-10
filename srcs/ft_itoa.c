#include "libft.h"

char	*ft_itoa(int nb)
{
  return (ft_strdup(ft_staticitoa(nb)));
  /*
  char	*dest;
  unsigned int	n;
  size_t	i;

  if (!(dest = ft_strnew(12)))
    return (0);
  n = ((nb < 0) ? -nb : nb);
  i = 12;
  while (n > 0)
    {
      dest[--i] = n % 10 + '0';
      n /= 10;
    }
  if (nb < 0)
      dest[--i] = '-';
  dest = strcpy(dest, dest + i);
  if (nb == 0)
    dest[0] = '0';
  return (dest);
  */
}

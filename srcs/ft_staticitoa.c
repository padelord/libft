#include "libft.h"

char	*ft_staticitoa(int nb)
{
  static char	dest[12];
  size_t	i;
  unsigned int	n;

  ft_bzero((void *)dest, 12);
  n = ((nb < 0) ? -nb : nb);
  i = 0;
  while (n > 0)
    {
      dest[i++] = n % 10 + '0';
      n /= 10;
    }
  if (nb < 0)
    dest[i] = '-';
  if (nb == 0)
    dest[0] = '0';
  return (ft_strrev(dest));  
}


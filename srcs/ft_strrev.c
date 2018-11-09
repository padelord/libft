#include "libft.h"

char	*ft_strrev(char *str)
{
  size_t	len;
  size_t	i;

  len = ft_strlen(str) - 1;
  i = 0;
  while (i < len)
    {
      ft_cswap(str + i, str + len);
      i++;
      len--;
    }
  return (str);
}

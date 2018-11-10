#include "libft.h"

void	*ft_memdup(const void *src, size_t n)
{
  void	*dst;

  if (!(dst = ft_memalloc(n)))
    return (0);
  ft_memcpy(dst, src, n);
  
}

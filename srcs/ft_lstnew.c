#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
  t_list	*dest;

  dest = ft_memalloc(sizeof(*dest));
  dest->content = ft_memalloc(content_size);
  
}

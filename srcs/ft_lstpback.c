#include "libft.h"

void	ft_lstpback(t_list **alst, t_list *new)
{
  t_list	*l;

  if (*alst == 0)
    {
      *alst = new;
      return ;
    }
  l = *alst;
  while (l->next)
    l = l->next;
  l->next = new;
}

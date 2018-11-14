#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
  t_list	*t;

  t = *alst;
  while (t->next)
    t = t->next;
  t->next = new;
}

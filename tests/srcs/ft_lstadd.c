#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new);
/*
{
	t_list	*t;

	if (*alst == 0)
	{
		*alst = new;
		(*alst)->next = 0;
		return ;
	}
	t = *alst;
	while (t->next)
		t = t->next;
	t->next = new;
}
*/

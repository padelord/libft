#include "libft.h"

void	ft_strclr(char *str)
{
	ft_bzero((void *)str, ft_strlen(str));
}

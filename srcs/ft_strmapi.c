#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*dest;

	if (!(dest = ft_strnew(ft_strlen(s))))
		return (0);
	i = 0;
	while (s[i])
    {
		dest[i] = f(i, s[i]);
		i++;
    }
	return (dest);
}

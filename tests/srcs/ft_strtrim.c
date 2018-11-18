#include "libft.h"

char	*ft_strtrim(char const *s);
/*
{
	size_t		i;
	size_t		size;
	char		*dest;

	while (*s && ft_iswspace(*s))
		s++;
	size = ft_strlen(s);
	i = 1;
	while (ft_iswspace(s[size - i]))
		i++;
	size -= i;
	if (!(dest = ft_strnew(size)))
		return (0);
	i = 0;
	while (s[i] && i < size)
    {
		dest[i] = s[i];
		i++;
    }
	return (dest);
}
*/

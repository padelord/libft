#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < n && s2[i])
    {
		s1[len + i] = s2[i];
		i++;
    }
	s1[i] = '\0';
	return (s1);
}

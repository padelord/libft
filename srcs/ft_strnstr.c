#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;
	int		ret;

	n_len = ft_strlen(needle);
	if (n_len > ft_strlen(haystack) || n_len > len)
		return (0);
	while (*(haystack + n_len - 1) && len >= n_len)
    {
		ret = ft_strncmp(haystack, needle, len);
		if (ret == 0 || ret == *(haystack + n_len))
			return ((char *)haystack);
		haystack++;
		len--;
    }
	return (0);
}

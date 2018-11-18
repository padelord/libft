#include <unistd.h>
#include "libft.h"

void	ft_putnchar(char c, size_t len)
{
  char	buff[BUFF_SIZE];

  memset(buff, c, BUFF_SIZE);
  while (len > 0)
    len -= write(1, buff, ((len > BUFF_SIZE) ? BUFF_SIZE : len));
}

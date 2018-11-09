#include <unistd.h>
#include "libft.h"

void	ft_putstr_color(char *str, const char *attr, const char *fg, const char *bg)
{
  ft_putstr("\e[");
  ft_putstr(attr);
  ft_putstr(";38;2;");
  ft_putstr(fg);
  ft_putstr(";48;2;");
  ft_putstr(bg);
  ft_putchar('m');
  ft_putstr(str);
  ft_putstr("\e[0;39;49m");
}

void	ft_putendl_color(char *str, const char *attr, const char *fg, const char *bg)
{
  ft_putstr_color(str, attr, fg, bg);
  ft_putchar('\n');
}













int	 ft_minmax(int min, int max, int n)
{
  if (min > max)
    return (n);
  if (n < min)
    return (min);
  if (n > max)
    return (max);
  return (n);
}

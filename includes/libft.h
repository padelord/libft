/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padelord <padelord@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 02:53:09 by padelord          #+#    #+#             */
/*   Updated: 2018/11/11 23:52:56 by padelord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
# define LIBFT_H_

# include <string.h>

# define BUFF_SIZE 32
/*
**	Color defines :
*/

# ifndef C_DATA
#  define C_DATA

#  define C_BLACK "0;0;0"
#  define C_WHITE "255;255;255"
#  define C_RED "255;0;0"
#  define C_GREEN "0;255;0"
#  define C_BLUE "0;0;255"
#  define C_GIRLY "255;125;200"
#  define C_YELLOW "255;255;0"
#  define C_PINK "255;0;255"
#  define C_CYAN "0;255;255"
#  define C_RANDOM "0;255;255"

#  define C_RESET "0"
#  define C_BOLD "1"
#  define C_FAINT "2"
#  define C_ITALIC "3"
#  define C_ULINE "4"
#  define C_BLINK "5"
# endif

typedef	struct s_list	t_list;

struct	s_list
{
	void	*content;
	size_t	content_size;
	t_list	*next;
};

void	*ft_memset(void *b, int c, size_t len);//done
void	ft_bzero(void *s, size_t n);//done
void	*ft_memcpy(void *dst, const void *src, size_t n);//done
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);//done
void	*ft_memmove(void *dst, const void *src, size_t len);//done
void	*ft_memchr(const void *s, int c, size_t n);//done
int		ft_memcmp(const void *s1, const void *s2, size_t n);//done
size_t	ft_strlen(const char *s);//done
char	*ft_strdup(const char *s1);//done
char	*ft_strcpy(char *dst, const char *src);//done
char	*ft_strncpy(char *dst, const char *src, size_t len);//done
char	*ft_strcat(char *s1, const char *s2);//done
char	*ft_strncat(char *s1, const char *s2, size_t n); //done
size_t	ft_strlcat(char *dst, const char *src, size_t size);//done
char	*ft_strchr(const char *s, int c);//done
char	*ft_strrchr(const char *s, int c);//done
char	*ft_strstr(const char *haystack, const char *needle);//done
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);//done
int		ft_strcmp(const char *s1, const char *s2);//done
int		ft_strncmp(const char *s1, const char *s2, size_t n);//done
int		ft_atoi(const char *str);//done
int		ft_isalpha(int c);//done
int		ft_isdigit(int c);//done
int		ft_isalnum(int c);//done
int		ft_isascii(int c);//done
int		ft_isprint(int c);//done
int		ft_toupper(int c);//done
int		ft_tolower(int c);//done

void	*ft_memalloc(size_t size);//done
void	ft_memdel(void **ap);//done
char	*ft_strnew(size_t size);//done
void	ft_strdel(char **as);//done
void	ft_strclr(char *s);//done
void	ft_striter(char *s, void (*f)(char *));//done
void	ft_striteri(char *s, void (*f)(unsigned int, char *));//done
char	*ft_strmap(char const *s, char (*f)(char));//done
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));//done
int		ft_strequ(char const *s1, char const *s2);//done
int		ft_strnequ(char const *s1, char const *s2, size_t n);//done
char	*ft_strsub(char const *s, unsigned int start, size_t len);//done
char	*ft_strjoin(char const *s1, char const *s2);//done
char	*ft_strtrim(char const *s);//done
char	**ft_strsplit(char const *s, char c);//done
char	*ft_itoa(int n);//done
void	ft_putchar(char c);//done
void	ft_putstr(char const *s);//done
void	ft_putendl(char const *s);//done
void	ft_putnbr(int n);//done
void	ft_putchar_fd(char c, int fd);//done
void	ft_putstr_fd(char const *s, int fd);//done
void	ft_putendl_fd(char const *s, int fd);//done
void	ft_putnbr_fd(int n, int fd);//done

t_list	*ft_lstnew(void const *content, size_t content_size);//done
void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

int		ft_isspace(int c);//done
void	ft_putstr_color(char *str, const char *attr, const char *fg, const char *bg);
void	ft_putendl_color(char *str, const char *attr, const char *fg, const char *bg);
void	ft_cswap(char *a, char *b);
char	*ft_strrev(char *str);
int		ft_iswspace(int c);
char	*ft_staticitoa(int nb);
void	*ft_memdup(const void *src, size_t n);
void	ft_wtabdel(char **tab);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:15:45 by cglanvil          #+#    #+#             */
/*   Updated: 2019/06/05 10:03:45 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int		ft_atoi(char const *s);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
int		*range(int min, int max);
int		ft_strcmp(char const *s1, char const *s2);
int		ft_strlen(char const *s);
char	*ft_strrev(char *s);
void	ft_swap(int *a, int *b);
char	*ft_strcpy(char *dst, char const *src);
char	*ft_strncpy(char *dst, char const *src, size_t n);
char	*ft_strstr(char const *haystack, char *needle);
int		ft_strncmp(char const *s1, char const *s2, size_t n);
char	*ft_strupcase(char *s);
char	*ft_strlowcase(char *s);
char	*ft_strcapitalize(char *s);
char	*ft_strdup(char const *s1);
char	*ft_itoa(int n);
char	*ft_strnstr(char const *haystack, char *needle, size_t len);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
void	ft_bzero(void *s, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:15:45 by cglanvil          #+#    #+#             */
/*   Updated: 2019/05/28 16:40:24 by cglanvil         ###   ########.fr       */
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

#endif

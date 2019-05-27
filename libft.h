/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:15:45 by cglanvil          #+#    #+#             */
/*   Updated: 2019/05/27 10:30:47 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
int		ft_atoi(char const *s);
int		ft_strcmp(char const *s1, char const *s2);
int		ft_strlen(char const *s);
char	*ft_strrev(char *s);
void	ft_swap(int *a, int *b);
char	*ft_strcpy(char *d, char *s);
char	*ft_strncpy(char *d, char *s, unsigned int n);
char	*ft_strstr(char *s, char *to_find);
int		ft_strncmp(char const *s1, char const *s2, size_t n);
char	*ft_strupcase(char *s);
char	*ft_strlowcase(char *s);
char	*ft_strcapitalize(char *s);
char	*ft_strdup(char const *s1);
int		*range(int min, int max);

#endif

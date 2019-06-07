/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:20:55 by cglanvil          #+#    #+#             */
/*   Updated: 2019/06/07 17:13:09 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		word;
	int		i;
	int		j;
	int		len;
	char	**str;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	len = 0;
	word = ft_wordcount(s, c);
	if (!(str = (char **)malloc(sizeof(char*) * (word + 1))))
		return (NULL);
	word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i+len] != c)
			len++;
		if (!(str[word] = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		while (s[i] != c)
		{
			str[word][j] = s[i];
			i++;
			j++;
		}
		str[word][j] = '\0';
		word++;
		j = 0;
		len = 0;
	}
	str[word][j] = '\0';
	return (str);
}

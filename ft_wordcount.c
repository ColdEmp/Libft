/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:36:30 by cglanvil          #+#    #+#             */
/*   Updated: 2019/06/07 16:49:09 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *s, char c)
{
	int	words;
	int	i;

	i = 1;
	words = 0;
	if (s[0] !=c)
		words++;
	while (s[i])
	{
		if (s[i] != c && s[i-1] == c)
			words++;
		i++;
	}
	return (words);
}

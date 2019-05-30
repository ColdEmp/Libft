/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:58:44 by cglanvil          #+#    #+#             */
/*   Updated: 2019/05/30 14:04:57 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen >= dstsize)
	{
		return (dstsize + srclen);
	}
	while (src[i] != '\0' && (dstlen + i) < (dstsize - 1))
	{
		dst[dstlen + i] = src[i];
		i++;	
	}	
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

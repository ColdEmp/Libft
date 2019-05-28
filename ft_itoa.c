/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:18:53 by cglanvil          #+#    #+#             */
/*   Updated: 2019/05/28 12:06:14 by cglanvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int len;
	long nbr;
	long nbrtemp;
	char *str;

	len = 0;
	nbr = n;
	if (n < 0)
	{
		len++;
		nbr *= -1;
	}
	nbrtemp = nbr;
	while (nbrtemp)
	{
		nbrtemp /= 10;
		len++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	len--;
	if (n < 0)
		str[0] = '-';
	while (nbr)
	{
		str[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	return (str);
}

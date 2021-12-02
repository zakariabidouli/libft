/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 23:25:43 by zbidouli          #+#    #+#             */
/*   Updated: 2021/12/01 23:27:09 by zbidouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*math(int n, int nlen)
{	
	char	*p;
	int		i;
	int		j;

	i = n;
	j = n;
	while (i > 0)
	{
		i = i / 10;
		nlen++;
	}
	p = malloc((char)nlen + 1);
	if (!p)
		return (NULL);
	p[nlen] = '\0';
	while (nlen-- != 0)
	{
		p[nlen] = (n % 10) + '0';
		n = n / 10;
	}
	if (j <= 0)
		p[0] = '-';
	return (p);
}

char	*ft_itoa(int n)
{
	int		nlen;
	int		i;
	int		j;
	char	*p;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	i = n;
	j = n;
	nlen = 0;
	if (i < 0)
	{
		nlen += 1;
		i *= (-1);
		n *= (-1);
	}
	p = math(i, nlen);
	return (p);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbidouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 00:14:48 by zbidouli          #+#    #+#             */
/*   Updated: 2021/12/02 00:18:04 by zbidouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	search(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		start;
	int		end;
	int		len;

	if (set == NULL)
		return ((char *)s1);
	start = 0;
	while (s1[start])
	{
		if (search(set, s1[start]))
			start++;
		else
			break ;
	}
	end = (ft_strlen((char *)s1) - 1);
	while (s1[end])
	{
		if (search(set, s1[end]))
			end--;
		else
			break ;
	}
	return (ft_substr(s1, start, ((end + 1) - start)));
}

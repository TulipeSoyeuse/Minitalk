/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:34:15 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/09 16:07:16 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*res;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	res = ft_calloc(1, s1len + s2len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (*s1)
	{
		res[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		res[i++] = *s2;
		s2++;
	}
	return (res);
}

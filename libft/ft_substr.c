/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:11:21 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/09 16:12:04 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;
	size_t	count;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	res = ft_calloc(1, len + 1);
	if (!res)
		return (NULL);
	i = 0;
	count = 0;
	while (s[start] && count < len)
	{
		res[i] = s[start];
		i++;
		start++;
		count++;
	}
	return (res);
}

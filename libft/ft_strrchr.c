/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:17:34 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/09 16:10:19 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	int	i;

	len = ft_strlen(s);
	i = len;
	while (i != 0)
	{
		s++;
		i--;
	}
	while (i != len)
	{
		if (*s == (char) c)
			return ((char *) s);
		s--;
		i++;
	}
	if (*s == (char) c)
		return ((char *) s);
	return (NULL);
}

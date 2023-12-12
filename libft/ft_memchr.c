/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:41:28 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/15 13:49:57 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	unsigned char	*ptr;

// 	ptr = (unsigned char *)s;
// 	while (n > 0)
// 	{
// 		if (*ptr == (unsigned char)c)
// 			return (ptr);
// 		ptr++;
// 		n--;
// 	}
// 	return (NULL);
// }

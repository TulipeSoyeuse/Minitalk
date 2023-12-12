/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:16:48 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/09 16:08:26 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*getd(char *d, size_t n)
{
	while (n-- != 0 && *d)
		d++;
	return (d);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = getd(dst, dstsize);
	dlen = d - dst;
	n = dstsize - dlen;
	s = src;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

// {
// 	int	i;
// 	int j;
// 	int len;
// 	if ((int) dstsize == 0)
// 		return (0);
// 	i = 0;
// 	j = ft_strlen(dst);
// 	len = j;
// 	while(i < (int) dstsize - len - 1 && src[i])
// 		dst[j++] = src[i++];
// 	if (dstsize != 0)
// 		dst[j] = 0;
// 	return (ft_strlen(src) + len);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:48:36 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/15 14:09:03 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}

/* int	main(void)
{
	char	*dst;

	char src[]="0123456789";
	dst = NULL;
	dst = malloc(30);
	ft_bzero(dst, 30);
	ft_strlcpy(dst, "debut de str:", 13);
	printf("str:%s\n", dst);
	ft_strlcat(dst, src, 22);
	printf("res:%s\n", dst);
}
*/

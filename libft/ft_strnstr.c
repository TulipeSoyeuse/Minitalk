/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:18:56 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/15 12:10:55 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	if (!haystack && !len)
		return (NULL);
	if (!*needle || needle == haystack)
		return ((char *)haystack);
	while (haystack[0] && len != 0)
	{
		i = 0;
		while (haystack[i] && haystack[i] == needle[i] && len - i > 0)
		{
			if ((int)ft_strlen(needle) == i + 1)
				return ((char *)haystack);
			i++;
		}
		haystack++;
		len--;
	}
	return ((char *)0);
}
/* int	main(void)
{
	char *s1 = "FF";
	char *s2 = "see FF your FF return (FF now FF");
	char *i1 = strnstr(s1, s2, 4);
	char *i2 = ft_strnstr(NULL, s2, 4);
	printf("base:%s\nres:%s\n", i1, i2);
} */

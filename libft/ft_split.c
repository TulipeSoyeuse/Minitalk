/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:49:40 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/15 13:45:36 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_split(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s != c && *s)
				s++;
		}
	}
	return (count);
}

static int	len_split(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static char	*copy_split(const char *s, char c)
{
	char	*tmp;
	int		i;

	tmp = ft_calloc(len_split(s, c) + 1, 1);
	if (!tmp)
		return (NULL);
	i = 0;
	while (*s && *s != c)
	{
		tmp[i] = *s;
		i++;
		s++;
	}
	return (tmp);
}

static const char	*movep(const char *s, char c, int len)
{
	s += len;
	while (*s == c && *s)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int		split_nb;
	char	**res;
	char	*tmp;
	int		i;

	if (!s)
		return (NULL);
	split_nb = count_split(s, c);
	res = malloc((split_nb + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res[split_nb] = NULL;
	i = 0;
	while (*s == c && *s)
		s++;
	while (split_nb--)
	{
		tmp = copy_split(s, c);
		if (!tmp)
			return (NULL);
		s = movep(s, c, len_split(s, c));
		res[i++] = tmp;
	}
	return (res);
}
// int	main()
// {
// 	printf("base:%s\n",
// 	 "      split       this for   me  !       "
// 	);
// 	char **result = ft_split("      split       this for   me  !       ", ' ');
// 	char **expected = ((
//	char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
// 	while (*result)
// 	{
// 		printf("%s:%s - %d\n",*expected,
// *result, strcmp(*result, *expected));
// 		result++;
// 		expected++;
// 	}
// }

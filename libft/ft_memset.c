/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:13:38 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/09 16:03:35 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (i < (int) len)
	{
		((unsigned char *)b)[i] = (unsigned char) c;
		i++;
	}
	return (((unsigned char *)b));
}

// int	main(int ac, char **av)
// {
// 	char	*res;

// 	res = NULL;
// 	if (ac > 1)
// 	{
// 		res = av[1];
// 		printf("before:%s\n", res);
// 		res = ft_memset(res, 'e', 8);
// 	}
// 	printf("after:%s\n", res);
// }

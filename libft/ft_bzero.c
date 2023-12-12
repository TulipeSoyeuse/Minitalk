/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:26:35 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/06 15:11:35 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
// int	main(int ac, char **av)
// {
// 	if (ac > 1)
// 	{
// 		ft_bzero(av[1], ft_atoi(av[2]));
// 	}
// 	printf("str :%s\n", av[1]);
// 	printf("after nbytes :%s\n", &av[1][ft_atoi(av[2])]);
// }

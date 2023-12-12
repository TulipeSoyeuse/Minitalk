/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:25:58 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/16 14:16:47 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_abs(long a)
{
	if (a < 0)
		return (-a);
	return (a);
}

static char	*reverse(char *tmp, int end)
{
	char	*res;
	int		i;

	res = ft_calloc(end + 2, 1);
	if (!res)
		return (NULL);
	i = 0;
	while (end > -1)
		res[i++] = tmp[end--];
	return (res);
}

char	*ft_itoa(int n)
{
	char	temp[11];
	char	*res;
	int		i;
	long	nbr;

	nbr = n;
	i = 0;
	nbr = ft_abs(nbr);
	if (n == 0)
	{
		res = ft_calloc(2, 1);
		res[0] = '0';
		return (res);
	}
	while (nbr)
	{
		temp[i++] = 48 + (nbr % 10);
		nbr /= 10;
	}
	if (n < 0)
		temp[i++] = '-';
	return (reverse(temp, i - 1));
}
// int	main(void)
// {
// 	int a;

// 	a = -0;
// 	printf("base:%d\nres:%s\n", a, ft_itoa(a));
// }

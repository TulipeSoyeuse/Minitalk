/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:38:23 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/09 15:55:47 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char c)
{
	if (c == ' ' || c == '\t' || c == '\v'
		|| c == '\n' || c == '\r' || c == '\f')
		return (1);
	else
		return (0);
}

static int	get_signe(const char c)
{
	if (c == '-')
		return (-1);
	if (c == '+' || ft_isdigit(c))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	signe;

	i = 0;
	res = 0;
	while (ft_isspace(str[0]))
		str++;
	signe = get_signe(str[0]);
	if (!ft_isdigit(*str))
		str++;
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * signe);
}

// int	main(int ac, char **av)
// {
// 	int	res;

// 	res = 0;
// 	if (ac > 1)
// 	{
// 		res = ft_atoi(av[1]);
// 	}
// 	ft_putnbr_fd(res, 0);
// }

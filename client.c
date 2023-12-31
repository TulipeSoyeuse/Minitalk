/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:14:16 by romain            #+#    #+#             */
/*   Updated: 2024/01/05 21:03:54 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int ac, char **av)
{
	char	*s;
	pid_t	pid;

	if (ac != 3)
		return (1);
	pid = ft_atoi(av[1]);
	s = av[2];
	if (!pid)
		return (1);
	while (*s)
	{
		encoding_send(*(s++), pid);
	}
	encoding_send(0, pid);
	return (0);
}

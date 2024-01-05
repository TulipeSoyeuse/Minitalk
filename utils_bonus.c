/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:13:57 by romain            #+#    #+#             */
/*   Updated: 2023/12/29 13:40:12 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	encoding_send(int c, pid_t pid)
{
	int	bits;

	bits = 8;
	while (bits--)
	{
		if (c & 0b10000000)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		c <<= 1;
		usleep(WAIT_TIME);
	}

}

void	handle_errors(char *s)
{
	ft_putstr_fd(s, 2);
	exit(0);
}

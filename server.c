/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:53:27 by romain            #+#    #+#             */
/*   Updated: 2023/12/12 00:58:07 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sa_reader(int signum)
{
	static int	cnt = 8;
	static char	v = 0;

	cnt--;
	if (signum == SIGUSR1)
	{
		v <<= 1;
		v |= 0b00000001;
	}
	if (signum == SIGUSR2)
		v <<= 1;
	if (!cnt)
	{
		cnt = 8;
		write(1, &v, 1);
		v = 0;
	}
}

void	setup_action(void)
{
	struct sigaction	sa_action_1;

	sigemptyset(&sa_action_1.sa_mask);
	sa_action_1.sa_handler = sa_reader;
	sa_action_1.sa_flags = 0;
	if (sigaction(SIGUSR1, &sa_action_1, NULL) == -1)
		handle_errors("Failed to change SIGUSR1's behavior");
	if (sigaction(SIGUSR2, &sa_action_1, NULL) == -1)
		handle_errors("Failed to change SIGUSR2's behavior");
}

int	main(void)
{
	setup_action();
	write(1, "PID = ", 6);
	ft_putnbr_fd(getpid(), 1);
	write(1, "\n", 1);
	while (1)
	{
		sleep(100);
	}
}

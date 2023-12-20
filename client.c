/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:14:16 by romain            #+#    #+#             */
/*   Updated: 2023/12/20 15:31:11 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	client_ack(int signum)
{
	if (signum == SIGUSR1)
	{
		write(1,"  _______________                        |*\\_/*|________\n",58);
		write(1," |  ___________  |     .-.     .-.      ||_/-\\_|______  |\n",59);
		write(1," | |           | |    .****. .****.     | |           | |\n",59);
		write(1," | |   0   0   | |    .*****.*****.     | |   0   0   | |\n",59);
		write(1," | |     -     | |     .*********.      | |     -     | |\n",59);
		write(1," | |   \\___/   | |      .*******.       | |   \\___/   | |\n",59);
		write(1," | |___     ___| |       .*****.        | |___________| |\n",59);
		write(1," |_____|\\_/|_____|        .***.         |_______________|\n",59);
		write(1,"   _|__|/ \\|_|_.............*.............._|________|_\n",57);
		write(1,"  / ********** \\                          / ********** \\\n",58);
		write(1,"/  ************  \\                      /  ************  \\\n",59);
		write(1,"--------------------                    --------------------\n",61);
	 	exit(0);
	}
}

void	setup_action_client(void)
{
	struct sigaction	sa_client_action;

	sigemptyset(&sa_client_action.sa_mask);
	sa_client_action.sa_handler = client_ack;
	sa_client_action.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &sa_client_action, NULL) == -1)
		handle_errors("Failed to change SIGUSR1's behavior");
}

int main(int ac, char **av)
{
	char *s;
	pid_t pid;

	if (ac != 3)
		return (1);
	pid = ft_atoi(av[1]);
	s = av[2];
	if (!pid)
		return (1);
	setup_action_client();
	while(*s)
		{
			encoding_send(*(s++),pid);
			usleep(50);
		}
	encoding_send(0, pid);
	sleep(10);
	return (0);
}

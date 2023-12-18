/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:14:16 by romain            #+#    #+#             */
/*   Updated: 2023/12/18 11:39:49 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

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
	if (sigaction(SIGUSR1, &sa_action_1, NULL) == -1)
		handle_errors("Failed to change SIGUSR1's behavior");
	while(*s)
		{
			encoding_send(*(s++),pid);
			usleep(50);
		}
	return (0);
}

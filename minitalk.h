/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:13:40 by romain            #+#    #+#             */
/*   Updated: 2023/12/29 13:39:30 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include "libft/libft.h"
# include <signal.h>

# define WAIT_TIME 1000

void	encoding_send(int c, pid_t pid);
void	handle_errors(char *s);
#endif

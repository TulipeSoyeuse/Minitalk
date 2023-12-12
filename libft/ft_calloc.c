/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdupeux <rdupeux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:18:41 by rdupeux           #+#    #+#             */
/*   Updated: 2023/11/09 15:56:07 by rdupeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	int		bytes;

	bytes = nmemb * size;
	if (size && bytes / size != nmemb)
		return (NULL);
	if (!nmemb || !size)
		return (malloc(0));
	res = malloc(nmemb * size);
	if (!res)
		return (NULL);
	else
	{
		ft_bzero(res, nmemb * size);
		return (res);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:10:33 by jkulka            #+#    #+#             */
/*   Updated: 2022/10/17 12:06:34 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(unsigned int count, unsigned int size)
{
	void	*p;

	if (malloc((count * size) == 1))
	{
		return (NULL);
	}
	p = malloc (count * size);
	if (p == 0)
	{
		return (p);
	}
	ft_bzero (p, count * size);
	return (p);
}

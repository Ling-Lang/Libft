/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:35:38 by jkulka            #+#    #+#             */
/*   Updated: 2022/10/31 14:07:44 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	char	*c_src;
	char	*c_dest;

	c_src = src;
	c_dest = dest;
	if ((c_src < c_dest) && (c_dest < c_src + len))
	{
		while (ft_strlen(src) > len)
		{
			*--c_dest = *--c_src;
			len--;
		}
	}
	else
	{
		while (len--)
		{
			*c_dest++ = *c_src++;
		}
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:48:24 by jkulka            #+#    #+#             */
/*   Updated: 2022/11/23 12:16:53 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (str != NULL)
	{
		while (*str != '\0')
		{
			if (*str == c)
			{
				return (str);
			}
			str++;
		}
		if (c == 0)
		{
			return (str);
		}
		if (c == 0xff + 1)
		{
			return (str);
		}
		return (NULL);
	}
	return (NULL);
}

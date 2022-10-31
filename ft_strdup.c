/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:51:31 by jkulka            #+#    #+#             */
/*   Updated: 2022/10/31 14:10:31 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		len;
	char	*str;

	len = 0;
	while (src[len])
	{
		len++;
	}
	str = malloc(len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	while (len >= 0)
	{
		str[len] = src[len];
		len--;
	}
	return (str);
}

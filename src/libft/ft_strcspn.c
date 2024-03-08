/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:02:42 by jkulka            #+#    #+#             */
/*   Updated: 2024/03/08 14:03:31 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_strcspn(const char *str, const char *reject)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (str[++i])
	{
		j = -1;
		while (reject[++j])
		{
			if (str[i] == reject[j])
				return (i);
		}
	}
	return (i);
}

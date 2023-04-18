/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:18:43 by jkulka            #+#    #+#             */
/*   Updated: 2023/04/18 13:19:53 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft.h"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# ifndef FD_MAX
#  define FD_MAX 42
# endif

char	*get_next_line(int fd);
int		ft_find_newline(char *save);
char	*ft_read_and_save(int fd, char *save);
char	*ft_get_line(char *save);
char	*ft_save(char *save);
char	*ft_strjoin_gnl(char *left_str, char *buff);
size_t	ft_strlen_gnl(char *str);
char	*ft_strchr_gnl(char *s, int c);

#endif

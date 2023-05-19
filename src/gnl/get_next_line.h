/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:50:57 by jkulka            #+#    #+#             */
/*   Updated: 2023/04/18 12:50:57 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
int		ft_find_newline(char *save);
char	*ft_read_and_save(int fd, char *save);
char	*ft_get_line(char *save);
char	*ft_save(char *save);
char	*ft_strjoin(char *left_str, char *buff);
size_t	ft_strlen(char *str);
char	*ft_strchr(char *s, int c);

#endif

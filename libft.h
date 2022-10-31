/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:53:20 by jkulka            #+#    #+#             */
/*   Updated: 2022/10/27 10:51:37 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, unsigned int len);
char	ft_toupper(char c);
int		ft_tolower(int c);
int		ft_atoi(char *str);
void	ft_bzero(void *s, unsigned int n);
void	*ft_calloc(unsigned int count, unsigned int size);
size_t	ft_strlcpy(char *dest, char *src, size_t len);
char	*ft_strdup(char *src);
void	*ft_memcpy(void *dest, void *src, unsigned int n);
void	*ft_memmove(void *dest, void *src, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(char *s1, char *s2, size_t n);
size_t	ft_strlcat(char *dest, char *src, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	ft_putstr_fd(char *str, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int nb, int fd);
int		ft_memcmp(const void *s1, const void *s2, size_t len);
char	*itoa(int n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
#endif
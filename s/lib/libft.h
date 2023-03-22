/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:30:07 by mrital-           #+#    #+#             */
/*   Updated: 2023/03/20 19:52:57 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void				ft_dprintf(int fd, char *s, ...);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strrchr(const char *s, int a);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strchr(const char *s, int a);
char				*ft_strnstr(const char *s, const char *needle, size_t len);
char				*ft_itoa(int n);
char				**ft_split(char const *s, char c);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strdup(const char *s1);
char				*ft_substr(char const *s, unsigned int start, size_t len);

int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);

size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlen(const char *s);

#endif
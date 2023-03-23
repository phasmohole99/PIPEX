/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:57:15 by mrital-           #+#    #+#             */
/*   Updated: 2023/03/23 16:44:54 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "./lib/libft.h"
# include <errno.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

char	**ft_slpt(char *cmd);
void	ft_parent(int in, int *fd_p, char **av_p, char **env_p);
void	ft_child(int out, int *fd_c, char **av_c, char **env_c);

void	ft_build(int *fd, char **av, char **env);
void	ft_dup(int fd1, int fd2, int fd3);

void	ft_ex(char *error, int ex);
void	ft_f(char *fi, char *cmt, int n_ex);
void	ft_r(char *fi, int n_ex);
void	ft_w(char *fi, int n_ex);
void	ft_x(char *fi, int n_ex);
char	*ft_cmd(char **path, char *cmd);
char	**ft_env(char **env);
char	*ft_path(char *arg_cmd, char **env);
void	ft_free_2(char **str, char *s);
void	ft_free(char *s1, char *s2);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 03:57:15 by mrital-           #+#    #+#             */
/*   Updated: 2023/03/21 22:39:59 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PIPEX_H
#define FT_PIPEX_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdarg.h>
# include <errno.h>
# include "./lib/libft.h"

char **ft_slpt(char *cmd);
void ft_parent_Pross(int in,int *fd_p, char **av_p,char **env_p);
void ft_child_Pross(int out,int *fd_c,char** av_c,char** env_c);

void ft_build(int *fd,char **av, char **env);
void    ft_dup(int fd1,int fd2, int fd3);

void ft_ex(char *error,int ex);
void    ft_F(char *fi,char *cmt, int n_ex);
void    ft_R(char *fi, int n_ex);
void    ft_W(char *fi, int n_ex);
void    ft_X(char *fi, int n_ex);
char *ft_cmd(char **path, char *cmd);
char **ft_env(char **env);
char    *ft_path(char *arg_cmd,char **env);
void    ft_free_2(char **str,char *s);
void    ft_free(char *s1,char *s2);


#endif
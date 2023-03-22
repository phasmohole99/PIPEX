/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:59:11 by mrital-           #+#    #+#             */
/*   Updated: 2023/03/20 20:43:58 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

// make child process
// first step check if file or folder exists
void ft_child_Pross(int in,int *fd_c,char** av_c,char** env_c)
{
    char **cmd;
    char *path;
    
    ft_F(av_c[1],"pipex: no such file or directory:",1);
    ft_R(av_c[1],1);
    ft_dup(in,fd_c[1],fd_c[0]);
    cmd = ft_slpt(av_c[2]);
    path = ft_path(cmd[0],env_c);
    if (!path)
    {
        ft_dprintf(2,"pipex: %s: command not found\n",cmd[0]);
        free(path);
        exit(127);
    }
    ft_X(path,126);
    execve(path, cmd, env_c);
}

// make parent process
void ft_parent_Pross(int out,int *fd_p, char **av_p,char **env_p)
{
    char    **cmd;
    char *path;
    
    ft_W(av_p[4],1);
    // printf("[ : %s]\n",av_p[4]);
    ft_dup(fd_p[0],out,fd_p[1]);
    cmd = ft_slpt(av_p[3]);
    path = ft_path(cmd[0], env_p);
    if (!path)
    {
        ft_dprintf(2,"pipex : %s: command not found\n", cmd[0]);
        free(path);
        exit(127);
    }
    ft_X(path,126);
    execve(path,cmd, env_p);
}
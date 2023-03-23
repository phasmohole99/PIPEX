/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:59:11 by mrital-           #+#    #+#             */
/*   Updated: 2023/03/23 16:45:47 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_child(int in, int *fd_c, char **av_c, char **env_c)
{
	char	**cmd;
	char	*path;

	ft_f(av_c[1], "pipex: no such file or directory:", 1);
	ft_r(av_c[1], 1);
	ft_dup(in, fd_c[1], fd_c[0]);
	cmd = ft_slpt(av_c[2]);
	path = ft_path(cmd[0], env_c);
	if (!path)
	{
		ft_dprintf(2, "pipex: %s: command not found\n", cmd[0]);
		free(path);
		exit(127);
	}
	ft_x(path, 126);
	execve(path, cmd, env_c);
}

void	ft_parent(int out, int *fd_p, char **av_p, char **env_p)
{
	char	**cmd;
	char	*path;

	ft_w(av_p[4], 1);
	ft_dup(fd_p[0], out, fd_p[1]);
	cmd = ft_slpt(av_p[3]);
	path = ft_path(cmd[0], env_p);
	if (!path)
	{
		ft_dprintf(2, "pipex: %s: command not found\n", cmd[0]);
		free(path);
		exit(127);
	}
	ft_x(path, 126);
	execve(path, cmd, env_p);
}

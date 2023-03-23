/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fork.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:23:32 by mrital-           #+#    #+#             */
/*   Updated: 2023/03/23 16:44:54 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_build(int *fd, char **av, char **env)
{
	int	pid;
	int	in;
	int	out;

	pid = fork();
	if (pid < 0)
		ft_ex("pipex: fork: forking error", 1);
	if (pid == 0)
	{
		in = open(av[1], O_RDONLY);
		if (in < 0)
			ft_ex("pipex: input: No such file or directory", 1);
		ft_child(in, fd, av, env);
	}
	out = open(av[4], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (out < -1)
		ft_ex("pipex: open: opening error", 1);
	ft_parent(out, fd, av, env);
}

void	ft_dup(int fd1, int fd2, int fd3)
{
	dup2(fd1, STDIN_FILENO);
	dup2(fd2, STDOUT_FILENO);
	close(fd1);
	close(fd2);
	close(fd3);
}

void	ft_ex(char *error, int ex)
{
	ft_dprintf(2, "%s\n", error);
	exit(ex);
}

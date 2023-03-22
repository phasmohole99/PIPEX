/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 04:00:09 by mrital-           #+#    #+#             */
/*   Updated: 2023/03/21 22:27:45 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

//./pipex = av[0] infile = av[1] cmd 1 = av[2] | cmd 2 = av[3] outfile = av[4]
// pipe(fd);
// 
int main(int ac, char **av, char **env)
{
    int fd[2];
    
    if (ac != 5)
        ft_ex("we need 5 arguments",1);
    if (pipe(fd) < 0)
        ft_ex("pipex : pipe: piping error",1);
    ft_build(fd, av , env);
    while (1){}
}
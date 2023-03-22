/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 09:24:34 by mrital-           #+#    #+#             */
/*   Updated: 2023/03/21 19:58:20 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void    ft_F(char *fi, char *cmt,int n_ex)
{
    if (access (fi, F_OK) < 0)
    {
        ft_dprintf(2,"%s %s\n",cmt,fi);
        exit (n_ex);
    }
}
void    ft_W(char *fi, int n_ex)
{
     if (access (fi, W_OK) < 0)
    {
        ft_dprintf(2,"pipex: %s: permission denied\n",fi);
        exit (n_ex);
    }
}
void    ft_R(char *fi, int n_ex)
{
    if (access (fi, R_OK) < 0)
    {
        ft_dprintf(2,"pipex: %s: permission denied\n",fi);
        exit (n_ex);
    }
}
void    ft_X(char *fi, int n_ex)
{
    if (access (fi, X_OK) < 0)
    {
        ft_dprintf(2,"pipex: %s: permission denied\n",fi);
        exit (n_ex);
    }
}

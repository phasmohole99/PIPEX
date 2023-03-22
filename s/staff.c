/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   staff.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:07:44 by mrital-           #+#    #+#             */
/*   Updated: 2023/03/21 20:12:55 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char **ft_slpt(char *cmd)
{
    char c;
    char **new;
    int i;
    
    i = 0;
    c = 0;
    while (cmd[i])
    {
        if (cmd[i] == 39 || cmd[i] == 34)
        {
            c = cmd[i];
            break;
        }
        i++;
    }
    if (c != 0)
    {
        new = ft_split(cmd,c);
        new[0] = ft_strtrim(new[0]," ");
    }
    else
        new = ft_split(cmd, ' ');
    return (new);    
}

char    *ft_path(char *arg_cmd,char **env)
{
    // check file if script
    char **paths;
    char *path;
    int i;
    
    i = 0;
    if (ft_strchr(arg_cmd,'/'))
    {
        ft_F(arg_cmd,"pipex: no such file or directory:",0);
        return(arg_cmd);
    }
    paths = ft_env(env);
    path = ft_cmd(paths,arg_cmd);
    return (path);
}

char **ft_env(char **env)
{
    char **paths;
    char *dflt;
    
    dflt = "/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:.";
    if (*env == NULL)
    {
        paths = ft_split(dflt, ':');
        return (paths);
    }
    while (ft_strncmp("PATH", *env,4))
        env++;
    paths = ft_split(*env + 5,':');
    return (paths);
}

char *ft_cmd(char **path, char *cmd)
{
    char *new;
    char *add;
    int i;
    
    i = 0;
    while (path[i] && path)
    {
        add = ft_strjoin(path[i],"/");
        new = ft_strjoin(add,cmd);
        if(access(new, F_OK) == 0)
        {
            ft_free_2(path,add);
            return(new);
        }
        ft_free(new,add);
        i++;        
    }
    ft_free_2(path, NULL);
    return (0);
}

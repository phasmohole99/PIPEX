/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:50:48 by mrital-           #+#    #+#             */
/*   Updated: 2023/03/23 16:42:35 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_free_2(char **str, char *s)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	free(s);
	str = NULL;
}

void	ft_free(char *s1, char *s2)
{
	free(s1);
	free(s2);
}

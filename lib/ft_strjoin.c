/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:31:24 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/24 10:15:30 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	x;

	new = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new == (void *)0)
		return (0);
	while (s1 && s2)
	{
		i = 0;
		while (s1 && i < ft_strlen(s1))
		{
			new[i] = s1[i];
			i++;
		}
		x = 0;
		while (s2 && x < ft_strlen(s2))
			new[i++] = s2[x++];
		new[i] = '\0';
		return (new);
	}
	return (0);
}

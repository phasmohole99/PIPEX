/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:31:31 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/22 04:37:09 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//this function is allocated string && return dupe string
char	*ft_strdup(const char *str)
{
	char	*dupe;
	int		index;
	int		len;

	index = 0;
	len = ft_strlen(str) + 1;
	dupe = malloc(len * sizeof(char));
	if (dupe == NULL)
		return (0);
	while (str[index] != '\0')
	{
		dupe[index] = str[index];
		index++;
	}
	dupe[index] = '\0';
	return (dupe);
}
/*int main ()
{
    printf(" the fake string is %s",ft_strdup("mohamed"));
}*/

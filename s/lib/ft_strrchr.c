/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:31:04 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/24 10:12:20 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// is begin search in end & return more string
char	*ft_strrchr(const char *s2, int a)
{
	int	i;

	i = ft_strlen(s2);
	while (i > 0)
	{
		if (s2[i] == (char)a)
			return ((char *)s2 + i);
		i--;
	}
	if (s2[i] == (char)a)
		return ((char *)s2 + i);
	return (0);
}
/*int main ()
{
    char str[]= "1oha2med";
    printf("%s",ft_strrchr(str,'2'));
    return (0);

}*/

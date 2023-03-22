/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:31:34 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/22 04:37:25 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//search a begin the string and return more the string
char	*ft_strchr(const char *s, int a)
{
	while (*s && *s != (char)a)
		s++;
	if (*s == '\0' && *s != (char)a)
		return (NULL);
	return ((char *)s);
}

// int main ()
// {
//     char str[]= "teste";
//     printf("%s\n",ft_strchr(str,'\0' + 256));
// 	// printf ("%s",strchr(str,'\0' + 256));
//     return (0);

// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:31:07 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/22 05:17:20 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *needle, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (*needle == '\0')
		return (str);
	if (!s && !len)
		return (0);
	while (*str && i + ft_strlen(needle) <= len)
	{
		if (ft_strncmp(str, needle, ft_strlen(needle)) == 0)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}

// int main ()
// {
// 	size_t	max;
// 	char	*s1;
// 	char	*s2;

//     printf("%s\n",ft_strnstr("","",0));
// 	printf("%s\n",ft_strnstr("","",1));
//     printf("%s\n",strnstr("mohamed","am",5));
//     printf("%d",strncmp("a","am",7));
//     if (strncmp("mohamed","am",7) >= 0)
//     {
//         printf("\n%s\n",strchr("mohamed",'a'));
//     }
// }
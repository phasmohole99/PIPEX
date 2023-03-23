/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:31:19 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/22 04:35:37 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//return lenght src
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*#include <string.h>
int main ()
{
    char dest[] = "mohamed";
    char src[] = "wor";
    printf("%zu\n",ft_strlcpy(dest, src, 0));
    printf("%lu\n",strlcpy(dest, src, 0));
}*/

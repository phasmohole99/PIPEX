/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:31:22 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/22 04:35:51 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//return  dst + src
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lent_dest;
	size_t	re;

	i = 0;
	re = 0;
	if (size == 0)
		return (ft_strlen(src));
	lent_dest = ft_strlen(dst);
	if (size > lent_dest)
		re = lent_dest + ft_strlen(src);
	else
		re = size + ft_strlen(src);
	if (size > lent_dest + 1)
	{
		while (src[i] != '\0' && lent_dest < size - 1)
		{
			dst[lent_dest] = src[i];
			lent_dest++;
			i++;
		}
		dst[lent_dest] = '\0';
	}
	return (re);
}

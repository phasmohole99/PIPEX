/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:31:52 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/23 05:33:43 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// stored anykey in list char according to lenght you are command
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*me;
	size_t			i;

	i = 0;
	me = (unsigned char *)b;
	while (i < len)
		me[i++] = c;
	return (b);
}
/*int main ()
{
    char c[] = "mohamed";
    printf("%s",ft_memset(c,'.',5));
    return (0);
}
*/
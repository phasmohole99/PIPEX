/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:32:27 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/22 05:05:46 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// not return anythink
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*int main ()
{
    char c[] = "holephasmo";
    ft_bzero(c,4);
    int i=0;
    for(i=0;i<sizeof(c)/sizeof(char);i++)
    {
        printf("%c \t",c[i]);
    }
    return (0);
}*/

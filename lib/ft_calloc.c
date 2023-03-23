/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:32:23 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/22 05:05:27 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// allocated memory and stored 0 in ther memory
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, size * count);
	return (ptr);
}
/*int main ()
{
    int *ptr,i;

    ptr = (int *)ft_calloc(i,sizeof(int));
    return (0);
}*/

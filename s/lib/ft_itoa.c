/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:32:07 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/23 06:05:43 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// itoi is transformet integer to ascii (decimal & hexa & octel)
//
static int	ft_len(long c)
{
	int	len;

	len = 0;
	if (c == 0)
		return (1);
	if (c < 0)
	{
		c *= -1;
		len++;
	}
	while (c > 0)
	{
		c /= 10;
		len++;
	}
	return (len);
}

static char	*ft_set(char *str)
{
	str[0] = '0';
	return (str);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		i;
	long	n;

	n = nb;
	i = ft_len(n);
	str = (char *)malloc(i + 1);
	if (!str)
		return (0);
	str[i] = 0;
	if (n == 0)
		return (ft_set(str));
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[--i] = '0' + (n % 10);
		n /= 10;
	}
	return (str);
}

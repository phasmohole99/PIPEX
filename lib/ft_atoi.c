/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrital- <mrital-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 04:32:30 by mrital-           #+#    #+#             */
/*   Updated: 2022/10/22 05:06:05 by mrital-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//search for numbers and jump anythink !(number)
int	ft_atoi(const char *str)
{
	int	i;
	int	signe;
	int	num;

	i = 0;
	signe = 1;
	num = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num * signe);
}

/*int main () 
{
     printf ("%d",ft_atoi("-13-23132"));
     return (0);

}*/

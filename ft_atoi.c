/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:35:55 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/15 18:20:35 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == ' ' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i++] - 48);
		if (nb >= __LONG_MAX__ && sign > 0)
			return (-1);
		else if (nb >= __LONG_MAX__ && sign < 0)
			return (0);
	}
	return (nb * sign);
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // const char s[]= "-9223372036854775809";
	//     printf("%d**\n",ft_atoi(s));
    // printf("%d\n",atoi(s));
	long x = -__LONG_MAX__; // Valeur maximale pour un long
    long y = -4;

    long result = x + y;  // Dépasse la capacité de `long`
    printf("Result: %ld\n", result); // L'overflow a lieu ici

}

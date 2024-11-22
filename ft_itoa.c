/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:34:07 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/15 18:22:54 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nbr(int n)
{
	int	i;

	i = 0;
	if (n < 0 || n == 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*c;
	int		j;
	long	nb;

	nb = (long) n;
	i = len_nbr(nb);
	c = malloc(sizeof(char) * (i + 1));
	if (!c)
		return (NULL);
	if (nb < 0)
	{
		c[0] = '-';
		nb = -nb;
	}
	j = i - 1;
	if (nb == 0)
		c[j] = '0';
	while (nb > 0)
	{
		c[j--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	c[i] = '\0';
	return (c);
}

// int main()
// {
// 	printf("%s\n",ft_itoa(-0));
// 	printf("%d\n",126%10);
// 	printf("%d",len_nbr(0));
// }
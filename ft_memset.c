/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:04:04 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/16 19:08:36 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*b;

	b = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		b[i] = (unsigned char)c;
		i++;
	}
	return ((void *) s);
}
#include <string.h>
int main()
{
	// int	n = -504245;
	// ft_memset(&n,0,4);
	// ft_memset(&n,0b1111111,4);
	// ft_memset(&n,0b11111111,3);
	// ft_memset(&n,0b00000101,2);
	// ft_memset(&n,0b00111001,1);
	// printf("%d",n);
	// char c[]="hello";
	// ft_memset(c,'a',5);
	// ft_memset(c,'i',4);
	// ft_memset(c,'n',3);
	// ft_memset(c,'a',2);
	// ft_memset(c,'r',1);
	// printf("%s",c);
}

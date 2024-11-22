/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:04:10 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/16 19:09:03 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char) c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}

/*#include <string.h>

int main()
{
	const char *p="hello";
	const char *t="hello";
	printf("%s\n",ft_memchr(p, 'e', 10));
	printf("%s\n",p);
	
	printf("%s\n",memchr(t, 'e', 10));
	printf("%s\n",t);
}*/
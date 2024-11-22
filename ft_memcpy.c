/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:01:08 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/16 19:08:36 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*s;
	char		*d;

	if (!src && !dst)
		return (NULL);
	if (src == dst)
		return (dst);
	i = 0;
	s = (const char *)src;
	d = (char *)dst;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((void *) dst);
}
// #include <stdio.h>
// int main()
// {
// 	char *p = "hello";
// 	char *s;
// 	printf("%s\n",ft_memcpy(s,p,5));
// 	//printf("%s\n",memcpy(dest1,src,3));
// }
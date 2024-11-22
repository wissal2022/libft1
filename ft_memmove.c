/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:45:45 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/16 20:34:07 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *) src;
	d = (unsigned char *) dst;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len > 0)
	{
		len--;
		d[len] = s[len];
	}
	return (dst);
}
/*int main() 
{ 
char *csrc = "wissal"; 
char *csrc2 = "wissal"; 
char dst[10];
char dst2[10];
//printf("%s\n", csrc + 5); 
memmove(dst, csrc, 4); 
ft_memmove(dst2, csrc2, 4);
printf("%s**\n", csrc); 
printf("%s**", csrc2); 
	return 0; 
} */
// #include <stdio.h>
// int main()
// {
// 	char *p = "alaa";
// 	p[0]= 'b';
// 	printf("%s",p);
// }
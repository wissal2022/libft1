/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:24:35 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/15 18:33:55 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;
	int		j;

	i = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	else if (size <= i)
		return (srclen + size);
	j = 0;
	while (j + i < size - 1 && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (srclen + i);
}
/*#include <string.h>
int main()
{
	char src[ ]= "efgh";
	char dest[10]="abcrdc";
	char a[10]="abcrdc";
	size_t res = ft_strlcat(dest, src, 6);
	printf("%zu\n%s\n",res ,dest);
	printf("%zu\n%s",strlcat(a, src, 6) ,a);
	return 0;
}*/
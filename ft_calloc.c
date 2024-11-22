/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:04:30 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/15 18:20:54 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	if (size != 0 && count * size / size != count)
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, count * size);
	return (tmp);
}

/*#include <limits.h>
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *) s;
	while (n > 0)
	{
		str[i] = 0;
		i++;
		n--;
	}
}
int main()
{
	size_t c= -7;
	int i = 0;
	size_t s=0;//sizeof(int);
	int *tmp = (int *)ft_calloc(c, s);
	if (tmp == NULL)
		printf("tmp is null");
	while (i < 5)
	{
		printf("%d**\n",tmp[i]);
		i++;
	}
}*/
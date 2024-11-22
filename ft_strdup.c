/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:47:56 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/15 18:32:56 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*p;

	i = ft_strlen(s1);
	j = 0;
	p = (char *)malloc(i + 1);
	if (!p)
		return (NULL);
	while (j < i)
	{
		p[j] = s1[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	const char p= NULL;
	printf("%s\n",strdup(p));
}*/

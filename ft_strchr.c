/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:34:11 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/16 16:25:46 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
		{
			str = (char *) s + i;
			return (str);
		}
		i++;
	}
	if ((char) c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
/*#include <string.h>
#include <stdio.h>
int main()
{
	printf("%s\n",strchr("wissal",'\0'));
	printf("%s",ft_strchr("wissal",'\0'));
	
}*/
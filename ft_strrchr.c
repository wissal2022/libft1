/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:05:44 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/16 16:31:51 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		occ;
	char	*str;

	i = 0;
	occ = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			occ = i;
		i++;
	}
	if (occ != 0 || s[occ] == (char) c)
	{
		str = (char *) s + occ;
		return (str);
	}
	if ((char) c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
/*#include <string.h>
#include <stdio.h>
int main()
{
	printf("%s\n",strrchr("",'i'));
	printf("%s",ft_strrchr("",'i'));
	
}*/
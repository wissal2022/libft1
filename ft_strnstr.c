/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:52:32 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/15 18:46:41 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	avalue(const char *str, const char *to_find, size_t i, size_t len )
{
	int	a;
	int	j;

	a = 1;
	j = 0;
	while (to_find[j] != '\0' && i < len && str[i])
	{
		if (to_find[j] != str[i])
			a = 0;
		i++;
		j++;
	}
	if (to_find[j] == '\0' && a == 1)
		return (1);
	return (0);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	int			j;
	int			k;
	char		*s;

	if (!str && to_find && len == 0)
		return (NULL);
	if (*to_find == '\0')
		return ((char *) str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			k = i;
			if (avalue(str, to_find, i, len))
			{
				s = (char *) str + k;
				return (s);
			}
			i = k;
		}
		i++;
	}
	return (NULL);
}

// #include <string.h>
// int main()
// {
// 	const char s[] = "abc";
// 	const char f[] = "abcdef";
// 	printf("%s\n",strnstr(s, f, 5));
// 	printf("%s",ft_strnstr(s, f, 5));
// }

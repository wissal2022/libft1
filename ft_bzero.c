/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:26:04 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/15 18:20:47 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
// #include <string.h>
// int main()
// {
// 	char *s=NULL;
// 	char *t=NULL;
// 	ft_bzero(s,2);
// 	//bzero(t,2);
// 	printf("'%c'",s[1]);
// 	//printf("'%c'",t[1]);
// }
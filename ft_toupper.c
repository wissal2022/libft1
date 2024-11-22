/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:52:29 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/15 18:35:18 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (ch - 32);
	return (ch);
}

/*#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("%d\n",ft_toupper('A'));
	printf("%d",toupper('A'));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:17:57 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/16 20:18:49 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	occurence(char const *set, char c)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

static int	debut(char const *s1, char const *set)
{
	int	k;

	k = 0;
	while (s1[k] && occurence(set, s1[k]))
		k++;
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *) s1);
	i = ft_strlen(s1);
	k = debut(s1, set);
	j = ft_strlen(s1) - 1;
	while (k < j && occurence(set, s1[j]))
		j--;
	str = (char *)malloc(sizeof(char) * ((j - k) + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (k <= j && s1[k] != '\0')
		str[i++] = s1[k++];
	str[i] = '\0';
	return (str);
}
// in a normal string with nothing to trim thre an allocation problem
// int main()
// {
//     char s1[] = "lorem ipsum dolor sit amet";
// 	char *strtrimm;
//     if (!(strtrimm = ft_strtrim(s1, "hh")))
//         printf("NULL");
//     else
// 	{
// 		/*
// 		for (size_t i = 0; i < ft_strlen(strtrimm); i++)
// 		{
// 			if (strtrimm[i] == '\t' || strtrimm[i] == '\n')
// 				printf("t");
// 			else
// 				printf("%c", strtrimm[i]);
// 		}
// 		*/
//         printf("%s\n", strtrimm);
// 	}
// 	printf("%zu\n", ft_strlen(strtrimm));
//     if (strtrimm == s1)
//         printf("\nA new string was not returned");
// 	// printf("%s\n",ft_strtrim("wehelloew", "we"));
// 	// printf("%zu\n", ft_strlen("hello"));
// }
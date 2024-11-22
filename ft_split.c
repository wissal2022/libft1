/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabourah <wabourah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:30:20 by wabourah          #+#    #+#             */
/*   Updated: 2024/11/16 14:02:51 by wabourah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_world(char const *str, char charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[i] == '\0')
		return (i);
	if (str[0] != charset)
		j++;
	while (str[i])
	{
		if (str[i] == charset)
		{
			if ((str[i + 1] != charset) && str[i + 1])
				j++;
		}
		i++;
	}
	return (j);
}

static int	count_char(char const *str, char charset)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != charset)
		i++;
	return (i);
}

static int	ft_str(int k, char const *s, char c, char *p)
{
	int	j;

	j = 0;
	while ((s[k] != c) && s[k])
		p[j++] = s[k++];
	p[j] = '\0';
	return (k);
}
void free_ptr(char **p, int i)
{
	int	n;

	n = 0;
	while (n < i)
	{
		free(p[n]);
		n++;
	}
	free(p);
}
char	**ft_split(char const *s, char c)
{
	char	**p;
	int		k;
	int		i;

	if (!s)
		return (NULL);
	p = malloc(sizeof(char *) * (count_world(s, c) + 1));
	if (!p)
		return (NULL);
	k = 0;
	i = 0;
	while (i < count_world(s, c))
	{
		if (s[k] != c)
		{
			p[i] = malloc(sizeof(char) * count_char(s + k, c) + 1);
			if (!p[i])
			{
				free_ptr(p, i);
				return (NULL);
			}
			k = ft_str(k, s, c, p[i++]);
		}
		else
			k++;
	}
	p[i] = 0;
	return (p);
}

int main()
{
	int i =0;
	char **p = ft_split("wii       khdiuhivh  kheiduh  ",' ');
	while (i < 3)
	{
		printf("%c\n",p[i][i]);
		i++;
	}
	// char s[]= "ab  jj";
	// printf("%c\n",s[4]);
	// printf("%s\n",s + 1);
	// printf("%s\n",s);
	// printf("%c\n",s[2]);
	// printf("%d",count_world("",'z'));
}
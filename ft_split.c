/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paszhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 18:59:01 by paszhang          #+#    #+#             */
/*   Updated: 2019/10/11 14:22:42 by paszhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		compare(char str, char charset)
{
	if (str == charset)
		return (1);
	return (0);
}

static	int		nbcut(char const *str, char charset)
{
	int count;
	int i;

	i = -1;
	count = 0;
	while (str[++i])
	{
		if (!compare(str[i], charset) && i == 0)
			count++;
		else if (compare(str[i], charset))
			if (!compare(str[i - 1], charset))
				count++;
	}
	return (count);
}

static	char	*asign(char const *str, char charset, int *i)
{
	int a;
	char*dest;
	int b;

	b = 0;
	a = 0;
	while (!compare(str[a + *i], charset) && str[a + *i])
		a++;
	if (!(dest = malloc(sizeof(char) * (a + 1))))
		return (0);
	while (b < a)
	{
		dest[b++] = str[*i];
		*i = *i + 1;
	}
	dest[b] = '\0';
	return (dest);
}

char			**ft_split(char const *s, char c)
{
	int ncut;
	int i;
	int a;
	char**dest;

	i = 0;
	a = 0;
	ncut = nbcut(s, c);
	if (!(dest = malloc(sizeof(*dest) * (ncut + 1))))
		return (0);
	while (s[i])
	{
		dest[a] = asign(s, c, &i);
		if (dest[a][0] != '\0')
			a++;
		else
			i++;
	}
	dest[a] = 0;
	return (dest);
}

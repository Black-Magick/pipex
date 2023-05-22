/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remanuel <remanuel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:51:46 by remanuel          #+#    #+#             */
/*   Updated: 2023/05/22 21:51:49 by remanuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int	contador(char const *s, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*s == c && trigger == 1)
			trigger = 0;
		s++;
	}
	return (i);
}

static char	*duplicador(char const *str, int strt, int end)
{
	char	*palavra;
	int		i;

	i = 0;
	palavra = (char *)malloc(((end - strt) + 1) * sizeof(char));
	if (!palavra)
	{
		free(palavra);
		return (0);
	}
	while (strt < end)
		palavra[i++] = str[strt++];
	palavra[i] = '\0';
	return (palavra);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	int		f;
	size_t	index;

	f = 0;
	i = 0;
	split = (char **)malloc(sizeof(char *) * (contador(s, c) + 1));
	index = 0;
	if (!s || !split)
		return (NULL);
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		index = i;
		while (s[i] != c && s[i])
			i++;
		if (s[i] || i > index)
			split[f++] = duplicador(s, index, i);
	}
	split[f] = NULL;
	return (split);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_my_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:48:32 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/30 14:55:47 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static int		ft_wordcount(char *str, char sep)
{
	int i;
	int count;

	if (str == 0)
		return (0);
	else if (sep == 0)
		return (1);
	else if(str[0] == 0)
		return (0);
	i = 1;
	count = 0;
	if (str[0] != sep)
		count++;
	while (str[i] != '\0')
	{
		if (str[i] != sep && str[i - 1] == sep)
			count++;
		i++;
	}
	return (count);
}

static char		**ft_malloc(char *str, char sep)
{
	int		len;
	char	**tab_str;

	len = ft_wordcount(str, sep);
	tab_str = malloc(sizeof(*tab_str) * (len + 1));
	if (tab_str == 0)
	{
		return (0);
	}
	return (tab_str);
}

static int		ft_next_word_count(char *str, char sep, int i)
{
	int count;

	count = 0;
	while (str[i] == sep && str[i] != '\0')
	{
		i++;
	}
	while (str[i] != '\0' && str[i] != sep)
	{
		count++;
		i++;
	}
	return (count);
}

static void		ft_free(char **str_tab, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		free(str_tab[j]);
		j++;
	}
	free(str_tab);
}

char			**ft_my_split(char *str, char charset)
{
	int		s;
	int		i;
	int		j;
	char	**tab_str;

	if (str == 0)
		return (0);
	s = 0;
	i = -1;
	if (!(tab_str = ft_malloc(str, charset)))
		return (0);
	while (++i < ft_wordcount(str, charset))
	{
		j = 0;
		if (!(tab_str[i] = malloc(ft_next_word_count(str, charset, s) + 1)))
		{
			ft_free(tab_str, i);
			return (0);
		}
		while (str[s] != '\0' && str[s] == charset)
			s++;
		while (str[s] != '\0' && str[s] != charset)
			tab_str[i][j++] = str[s++];
		tab_str[i][j] = '\0';
	}
	tab_str[i] = 0;
	return (tab_str);
}

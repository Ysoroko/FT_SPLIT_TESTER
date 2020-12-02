/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare_results.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:51:29 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/28 19:51:29 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	if (s1 == 0 && s2 == 0)
		return (0);
	if (s1 == 0 && s2 != 0)
		return (-1);
	if (s1 != 0 && s2 == 0)
		return (-1); 
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}


int		ft_compare_results(char **your_str_tab, char **good_str_tab)
{
	int i;

	i = 0;
	if (your_str_tab == 0 && good_str_tab == 0)
		return (0);
	if (your_str_tab == 0 && good_str_tab != 0)
		return (-1);
	if (your_str_tab != 0 && good_str_tab == 0)
		return (-1);
	while (your_str_tab[i] != 0 && good_str_tab[i] != 0)
	{
		if (ft_strcmp(your_str_tab[i], good_str_tab[i]) != 0)
			return (-1);
		i++;
	}
	return (ft_strcmp(your_str_tab[i], good_str_tab[i]));
}
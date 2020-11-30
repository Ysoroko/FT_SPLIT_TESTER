/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:13:17 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/28 19:13:17 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_mem_count(char **str_tab)
{
	int i;
	int mem_count;

	i = 0;
	mem_count = (int)(MALLOC_SIZE_FUNCTION(str_tab));
	if (str_tab != 0)
	{
		while (str_tab[i] != 0)
		{
			mem_count += (int)(MALLOC_SIZE_FUNCTION(str_tab[i]));
			i++;
		}
	}
	return (mem_count);
}
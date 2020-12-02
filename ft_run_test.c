/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:10:54 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/30 17:34:08 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_run_test(const char *str, char sep, int *test, int tab_len)
{
	char	**str_tab;
	char	**good_str;

	str_tab = ft_split(str, sep);
	good_str = ft_my_split(str, sep);

	ft_print_test_number(test, tab_len);
	ft_print_ok_or_ko(str_tab, good_str);
	ft_print_string(str);
	ft_print_charset(sep);
	ft_print_the_result(str_tab);
	ft_print_my_result(good_str);
	if (ft_mem_count(str_tab) != ft_mem_count(good_str))
	{
		ft_print_mem(str_tab);
		ft_print_my_mem(good_str);
		printf("Memory difference: %s[KO]\n\n", COLOR_YELLOW);
	}
	else if (ft_mem_count(str_tab) == ft_mem_count(good_str))
	{
		ft_print_mem(str_tab);
		printf("Memory difference: [OK]\n\n");
	}
	ft_print_yellow_line();

	if (ft_compare_results(str_tab, good_str) == 0)
	{
		free(str_tab);
		free(good_str);
		return (1);
	}
	else
	{
		free(str_tab);
		free(good_str);
		return (0);
	}
}

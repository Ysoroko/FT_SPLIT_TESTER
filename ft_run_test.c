/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:10:54 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/28 19:10:54 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_run_test(char *str, char sep, int *test)
{
	char	**str_tab;
	char	**good_str;

	str_tab = ft_split(str,sep);
	good_str = ft_my_split(str,sep);

	ft_print_test_number(test);
	ft_print_string(str);
	ft_print_charset(sep);
	ft_print_the_result(str_tab);
	ft_print_my_result(good_str);
	ft_print_mem(str_tab);
	ft_print_my_mem(good_str);
	ft_print_ok_or_ko(str_tab, good_str);
	ft_print_yellow_line();
}
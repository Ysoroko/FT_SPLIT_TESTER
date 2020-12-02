/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:23:02 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/28 19:23:02 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_header()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf(BOLDYELLOW);
	ft_print_yellow_line();
	printf(BOLDMAGENTA);
	printf("\t\t\t\t\t\t\t\tFT_SPLIT TESTER BY YSOROKO\n\n");
	printf(COLOR_YELLOW);
	ft_print_yellow_line();
}

void	ft_print_test_number(int *test, int tab_len)
{
	//Print the test number
	printf(BOLDMAGENTA);
	printf("TEST %d/%d --> ", (*test)++, tab_len + 1);
}


void	ft_print_string(const char *str)
{
	printf(BOLDCYAN);
	if (str == 0)
	{
		printf("STR: \"(null)\"\n");
	}
	else if (str[0] == 0)
	{
		printf("STR: Empty string with \'\\0\' at the position str[0]\n");
	}
	else
	{
		printf("STR: \"%s\"\n", str);
	}
}

void	ft_print_charset(char sep)
{
	if (sep == 0)
	{
		printf("SEP: \'\\0\'\n\n");
	}
	else
	{
		printf("SEP: \'%c\'\n\n", sep);
	}
}

void	ft_print_the_result(char **str_tab)
{
	int i;

	i = 0;
	printf(COLOR_RESET); 
	printf("\nYour ft_split returned a tab of the following strings: \n\n"); 
	if (str_tab != 0)
	{
		while (str_tab[i] != 0)
		{
			if (str_tab[i][0] == '\0')
				printf("%d: Empty string with \'\\0\' at the position str[0]\n", i);
			else
				printf("%d: \"%s\"\n", i, str_tab[i]);
			i++;
		}
		if (str_tab[i] == 0)
		{
			printf("%d: (null)\n\n\n\n", i);
		}
	}
	else
		printf("Your ft_split returned a \"NULL\" str_tab\n\n\n\n");
}

void	ft_print_my_result(char **str_tab)
{
	int i;

	i = 0;
	printf(COLOR_RESET); 
	printf("\nMy ft_split returned: \n\n"); 
	if (str_tab != 0)
	{
		while (str_tab[i] != 0)
		{
			if (str_tab[i][0] == '\0')
				printf("%d: Empty string with \'\\0\' at the position str[0]\n", i);
			else
				printf("%d: \"%s\"\n", i, str_tab[i]);
			i++;
		}
		if (str_tab[i] == 0)
		{
			printf("%d: (null)\n\n\n\n", i);
		}
	}
	else
		printf("My ft_split returned a \"NULL\" str_tab\n\n\n\n");
}


void	ft_print_good_result(char **str_tab)
{
	int i;

	i = 0;
	printf(COLOR_RESET); 
	printf("\nYour ft_split returned a tab of the following strings: \n\n"); 
	if (str_tab != 0)
	{
		while (str_tab[i] != 0)
		{
			if (str_tab[i][0] == '\0')
				printf("%d: Empty string with \'\\0\' at the position str[0]\n", i);
			else
				printf("%d: \"%s\"\n", i, str_tab[i]);
			i++;
		}
		printf("%d: %s\n\n\n\n", i, str_tab[i]);
	}
	else
		printf("Your ft_split returned a \"NULL\" str_tab\n\n\n\n");
}



void	ft_print_mem(char **str_tab)
{
	printf(BOLDBLUE);
	printf("Memory bytes allocated and used by your str_tab: ");
	printf("%d\n\n", ft_mem_count(str_tab));
}

void	ft_print_my_mem(char **str_tab)
{
	printf(BOLDBLUE);
	printf("Memory bytes allocated and used by my str_tab: ");
	printf("%d\n\n", ft_mem_count(str_tab));
}

void	ft_print_yellow_line()
{
	printf(COLOR_YELLOW);
	printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
}


void	ft_print_ok_or_ko(char **str, char **good_str)
{
	if (ft_compare_results(str, good_str) != 0)
	{
		printf(COLOR_RED);
		printf("[KO]  \n\n");
	}
	else
	{
		printf(COLOR_GREEN);
		printf("[OK]  \n\n");
	}
}

void	ft_dont_forget(void)
{
	printf(BOLDWHITE);
	printf("\nDon't forget:\n\n");
	printf("* Your ft_split should never segfault. The tests will stop if they encounter a segfault and the remaining tests won't be ran\n");
	printf("* Protect all your malloc calls\n");
	printf("* Free each string in your tab and the tab itself if a malloc call returns 0 in the middle of your ft_split\n");
	printf("* The Norm & Compilation Warnings\n");
	printf("* Declare all the functions (except for ft_split itself) as static\n\n\n\n");
	printf(COLOR_RESET);
}
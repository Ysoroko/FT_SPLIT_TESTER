/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:41:39 by ysoroko           #+#    #+#             */
/*   Updated: 2021/06/07 14:11:59 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int main()
{
	int test;
	int tab_len = 18;
	int tab[tab_len];

	test = 1;

	ft_print_header();
	
	// TEST 1: |UN_DEUX_TROIS| with '_' as sep
	tab[test-2] = ft_run_test("UN_DEUX_TROIS", '_', &test, tab_len);


	//TEST 2: |U_N_D_E_U_X_T_R_O_I_S| with '_' as sep
	tab[test-2] = ft_run_test("U_N_D_E_U_X_T_R_O_I_S", '_', &test, tab_len);


	//TEST 3: |_UNDEUXTROIS| with '_' as sep
	tab[test-2] = ft_run_test("_UNDEUXTROIS", '_', &test, tab_len);


	//TEST 4: |UNDEUXTROIS_| with '_' as sep
	tab[test-2] = ft_run_test("UNDEUXTROIS_", '_', &test, tab_len);


	//TEST 5: |UN____DEUX___TROIS| with '_' as sep
	tab[test-2] = ft_run_test("UN____DEUX___TROIS", '_', &test, tab_len);


	//TEST 6: |_UN_DEUX_TROIS_| with '_' as sep
	tab[test-2] = ft_run_test("_UN_DEUX_TROIS_", '_', &test, tab_len);


	//TEST 7: |_UN__DEUX___TROIS____| with '_' as sep
	tab[test-2] = ft_run_test("_UN_DEUX_TROIS_", '_', &test, tab_len);


	//TEST 8: |____UN___DEUX__TROIS_| with '_' as sep
	tab[test-2] = ft_run_test("_UN_DEUX_TROIS_", '_', &test, tab_len);


	//TEST 9: |_UNDEUXTROIS_| with '_' as sep
	tab[test-2] = ft_run_test("_UNDEUXTROIS_", '_', &test, tab_len);


	//TEST 10: |UNDEUXTROIS| with '_' as sep
	tab[test-2] = ft_run_test("UNDEUXTROIS", '_', &test, tab_len);


	//TEST 11: |U| with '_' as sep
	tab[test-2] = ft_run_test("U", '_', &test, tab_len);


	//TEST 12: |_| with '_' as sep
	tab[test-2] = ft_run_test("_", '_', &test, tab_len);


	//TEST 13: |___________________| with '_' as sep
	tab[test-2] = ft_run_test("___________________", '_', &test, tab_len);


	//TEST 14: |_| with '(empty)' as sep
	tab[test-2] = ft_run_test("_", 0, &test, tab_len);


	//TEST 15: |UN_DEUX_TROIS| with '(empty)' as sep
	tab[test-2] = ft_run_test("UN_DEUX_TROIS", 0, &test, tab_len);


	//TEST 16: |\0| with '(empty)' as sep
	tab[test-2] = ft_run_test("", 0, &test, tab_len);

	
	//TEST 17: |\0| with '_' as sep
	tab[test-2] = ft_run_test("", '_', &test, tab_len);


	//TEST 18: |(empty)| with '_' as sep
	tab[test-2] = ft_run_test(0, '_', &test, tab_len);
	

	//TEST 19: |(empty)| with '(empty)' as sep
	tab[test-2] = ft_run_test(0, 0, &test, tab_len);


	//Print tests tab
	printf(BOLDWHITE);
	printf("Tests:     ");
	for(int j = 0; j <= tab_len; j++)
	{
		printf(BOLDWHITE);
		if(j < 10)
		{
			printf(" %d     ",j + 1);
		}
		else
		{
			printf("%d     ",j + 1);
		}
		
	}
	printf("\n\n");


	//Print results tab
	printf(BOLDWHITE);
	printf("Results:   ");
	for(int j = 0; j <= tab_len; j++)
	{
		if (tab[j])
		{
			printf(COLOR_GREEN);
			printf("[OK]   ");
		}
		else
		{
			printf(COLOR_RED);
			printf("[KO]   ");
		}
	}
	printf("\n\n");
	ft_print_yellow_line();
	
	

	ft_dont_forget();
}

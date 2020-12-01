/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:41:39 by ysoroko           #+#    #+#             */
/*   Updated: 2020/12/01 17:29:41 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int main()
{
	char empty_str[1];
	int test;
	int tab[15];

	empty_str[0] = 0;
	test = 1;

	ft_print_header();
	
	// TEST 1: |UN_DEUX_TROIS| with '_' as sep
	tab[test-2] = ft_run_test("UN_DEUX_TROIS", '_', &test);


	//TEST 2: |U_N_D_E_U_X_T_R_O_I_S| with '_' as sep
	tab[test-2] = ft_run_test("U_N_D_E_U_X_T_R_O_I_S", '_', &test);


	//TEST 3: |_UN_DEUX_TROIS| with '_' as sep
	tab[test-2] = ft_run_test("_UN_DEUX_TROIS", '_', &test);


	//TEST 4: |_UNDEUXTROIS| with '_' as sep
	tab[test-2] = ft_run_test("_UNDEUXTROIS", '_', &test);


	//TEST 5: |UN_DEUX_TROIS_| with '_' as sep
	tab[test-2] = ft_run_test("UN_DEUX_TROIS_", '_', &test);


	//TEST 6: |UNDEUXTROIS_| with '_' as sep
	tab[test-2] = ft_run_test("UNDEUXTROIS_", '_', &test);


	//TEST 7: |UN____DEUX____TROIS| with '_' as sep
	tab[test-2] = ft_run_test("UN____DEUX____TROIS", '_', &test);


	//TEST 8: |_UN_DEUX_TROIS_| with '_' as sep
	tab[test-2] = ft_run_test("_UN_DEUX_TROIS_", '_', &test);


	//TEST 9: |_UNDEUXTROIS_| with '_' as sep
	tab[test-2] = ft_run_test("_UNDEUXTROIS_", '_', &test);
	

	//TEST 10: |_UN_DEUX_TROIS_| with '_' as sep
	tab[test-2] = ft_run_test("_UN_DEUX_TROIS_", '_', &test);
	
	
	//TEST 11: |\0| with '_' as sep
	tab[test-2] = ft_run_test(empty_str, '_', &test);
	

	//TEST 12: |UN_DEUX_TROIS| with '(empty)' as sep
	tab[test-2] = ft_run_test("UN_DEUX_TROIS", 0, &test);


	//TEST 13: |(empty)| with '_' as sep
	tab[test-2] = ft_run_test(0, '_', &test);


	//TEST 14: |___________________| with '_' as sep
	tab[test-2] = ft_run_test("___________________", '_', &test);
	

	//TEST 15: |_| with '_' as sep
	tab[test-2] = ft_run_test("_", '_', &test);
	

	//TEST 16: |(empty)| with '(empty)' as sep
	tab[test-2] = ft_run_test(0, 0, &test);

	//Print tests tab
	printf(BOLDWHITE);
	printf("Tests:     ");
	for(int j = 0; j < 16; j++)
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
	for(int j = 0; j < 16; j++)
	{
		if (tab[j] == 1)
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
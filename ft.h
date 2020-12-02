/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 12:52:43 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/30 12:52:43 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

//for MacOS, MALLOC_SIZE_FUNCTION Macro should be malloc_size 
//for Windows, MALLOC_SIZE_FUNCTION Macro should be _msize 
//for GLIBC systems, MALLOC_SIZE_FUNCTION Macro should be malloc_usable_size
#define MALLOC_SIZE_FUNCTION malloc_size

//For Windows/GLIBC next #include should be "#include <malloc/malloc.h>" 
//For MacOs next #include should be #include <malloc.h> 
#include <malloc/malloc.h>


//Includes
#include <stdio.h>
#include <stdlib.h>


//Prototypes
char			**ft_split(const char  *str, char charset);
char			**ft_my_split(const char *str, char charset);

int			ft_run_test(const char *str, char sep, int *test, int tab_len);

int				ft_mem_count(char **str_tab);

void			ft_print_header();
void			ft_print_test_number(int *test, int tab_len);
void			ft_print_string(const char *str);
void			ft_print_charset(char sep);
void			ft_print_the_result(char **str_tab);
void			ft_print_my_result(char **str_tab);
void			ft_print_mem(char **str_tab);
void			ft_print_my_mem(char **str_tab);
void			ft_print_yellow_line();
void			ft_print_ok_or_ko(char **str, char **good_str);
void			ft_dont_forget(void);

int				ft_strcmp(const char *s1, const char *s2);
int				ft_compare_results(char **your_str_tab, char **good_str_tab);




//Colors
#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_YELLOW  "\x1b[33m"
#define COLOR_BLUE    "\x1b[34m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_CYAN    "\x1b[36m"
#define COLOR_RESET   "\x1b[0m"

#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

#endif
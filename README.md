# FT_SPLIT_TESTER
A complete tester for a troublesome function ft_split for s19/s42 coding school.

This tester covers more situations than the commonly used War Machine and Libft-unit testers and better prepares your ft_split for the Moulinette.



### Features:
- 19 Tests for every possible situation your ft_split will ever encounter
- Memory log which tracks how many bytes of memory you used for each test and compares it to my ft_split
- Shows you side by side the expected output and your output

--------------------------------------------------------------------------------------------------------------------------------------

![](Images/gif.gif)

--------------------------------------------------------------------------------------------------------------------------------------
### Setting Up:
1) Git clone this repo inside your libft folder containing your "ft_split.c" file (and any other .c files needed for your ft_split to work)


2) Optionally, you can manually provide the path to your ft_split.c (and other.c files it uses) in Makefile

      Example: /Users/jdoe/libft/ft_split.c     or    /Users/jdoe/libft/*.c 
   
3) a) For MacOs, ignore this part, everything is already set up for the tester to count the memory used.

   b) For GLIBC (Linux) terminal, in libft.h file line 19 should be changed to: `#define MALLOC_SIZE_FUNCTION malloc_usable_size`
      and line 23 should be changed to `#include <malloc.h>`
      
   c) For Windows terminal, in libft.h file line 19 should be changed to: `#define MALLOC_SIZE_FUNCTION malloc_usable_size`
      and line 23 should be changed to `#include <malloc.h>`
      
--------------------------------------------------------------------------------------------------------------------------------------
### Run:
- Type `make` command in the terminal while in this tester's repo to compile and run the tests
- Type `make log` in the terminal after the compiling to check the results without recompiling


--------------------------------------------------------------------------------------------------------------------------------------
### Don't Forget To Check By Yourself:

-Your ft_split should never segfault. The tests will stop if they provoke a segfault and the remaining tests won't be ran

-Protect all your malloc calls & don't forget to add "+1" in your malloc for '\0' and (null)

-Free each string in your tab and the tab itself if a malloc call returns 0 in the middle of your ft_split

-This tester won't test the leaks in your ft_split, it's up to you

-The Norm & The compilation warnings

-Declare all the functions (except for ft_split itself) as static

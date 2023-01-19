#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 $1 print_list.c print_array.c -o output

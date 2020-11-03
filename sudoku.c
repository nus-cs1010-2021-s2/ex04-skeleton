/**
 * CS1010 Semester 1 AY20/21
 * Exercise 5: Sudoku
 *
 * TODO(by student): Brief description of the purpose 
 * of this program.
 *
 * @file: sudoku.c
 * @author: XXX (Group XXX)
 */
#include "cs1010.h"
#include <stdbool.h>
#include <unistd.h>

#define EMPTY '.'

void print_row(char *row) {
    for (int i = 0; i < 9; i += 1) {
        putchar(row[i]);
        if (i == 2 || i == 5) {
            cs1010_print_string("│");
        }
    }
    putchar('\n');
}

void print_sudoku(char *puzzle[9]) {
    cs1010_clear_screen();
    for (int i = 0; i < 9; i += 1) {
        print_row(puzzle[i]);
        if (i == 2 || i == 5) {
            cs1010_println_string("───┼───┼───");
        }
    }
    if (isatty(fileno(stdout))) {
        usleep(10*1000);
    }
}

int main()
{
}

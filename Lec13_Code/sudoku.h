/************************
 * File Name: sudoku.h 
 * Author: Howard Duck 
 * Email: ewb@nd.edu 
 *
 * This file contains the function declarations for Sudoku 
 ******************************/

#ifndef SUDOKU_H
#define SUDOKU_H

#include <stdio.h>

#define ROWS 9
#define COLS 9

void print_greeting();

int get_player_choice();

void print_puzzle( int sudoku[COLS] );


#endif
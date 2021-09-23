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

void print_puzzle( int sudoku[ROWS][COLS] );

void get_user_choice( int* value, long unsigned int* row,
					long unsigned int* col );

void update_puzzle( int sudoku[ROWS][COLS], int value, 
				long unsigned int row, long unsigned int col );

#endif
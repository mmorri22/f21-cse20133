/* Author: Matthew Morrison
 * Email: matt.morrison@nd.edu 
 * File Name: sudoku_08.h
 * Date Created: 9/18/2021
 *
 *
 * This file contains the function declarations for
 * the Sudoku Combined Concepts lecture(s)
 **********************************************/
 
#ifndef SUDOKU_08_H
#define SUDOKU_08_H

#include <stdio.h>

#define ROWS 9
#define COLS 9

void print_greeting( void );

int player_choice ( void );

void print_puzzle( int sudoku[ROWS][COLS] );

void get_user_choice( int* value, long unsigned int* row,
						long unsigned int* col );

void update_puzzle( int sudoku[ROWS][COLS], int value, long unsigned int row, 
					long unsigned int col );

#endif
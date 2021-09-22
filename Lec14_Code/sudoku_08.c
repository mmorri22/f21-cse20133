/* Author: Matthew Morrison
 * Email: matt.morrison@nd.edu 
 * File Name: sudoku_08.c
 * Date Created: 9/18/2021
 *
 *
 * This file contains the function definitions for
 * the Sudoku Combined Concepts lecture(s)
 **********************************************/

#include "sudoku_07.h"

void print_greeting( void ){
	
	fprintf( stdout, "Welcome to our Sudoku Game!\n" );
	
}

int player_choice ( void ){
	
	int player_choice;
	
	fprintf( stdout, "Enter your choice:\n" );
	fprintf( stdout, "1: Print the puzzle\n" );
	fprintf( stdout, "2: Make a change\n" );
	fprintf( stdout, "3: Quit the game\n" );
	
	fscanf( stdin, "%d", &player_choice );
	
	return player_choice;
	
}


void print_puzzle( int sudoku[ROWS][COLS] ){

	long unsigned int row_iter;
	for( row_iter = 0; row_iter < ROWS; ++row_iter ){

		long unsigned int col_iter;
		for( col_iter = 0; col_iter < COLS; ++col_iter ){
			
			fprintf( stdout, "%d ", sudoku[row_iter][col_iter] );
			
		}
		fprintf( stdout, "\n" );
	}
}

void get_user_choice( int* value, long unsigned int* row,
						long unsigned int* col )
{
	
	fprintf( stdout, "Enter your choice: value row col:\n" );
	
	fscanf( stdin, "%d %ld %ld", value, row, col );
	
}

void update_puzzle( int sudoku[ROWS][COLS], int value, long unsigned int row, 
					long unsigned int col )
{
	sudoku[row][col] = value;
}




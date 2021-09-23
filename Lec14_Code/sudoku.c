/************************
 * File Name: sudoku.c
 * Author: Howard Duck 
 * Email: ewb@nd.edu 
 *
 * This file contains the function definitions for Sudoku 
 ******************************/
 
 #include "sudoku.h"
 
 void print_greeting(){
	 
	 fprintf( stdout, "Welcome to the Sudoku Game!\n" );
	 
 }
 
 int get_player_choice(){
	 
	 int choice = 0;
	 
	 fprintf( stdout, "Enter your choice\n" );
	 fprintf( stdout, "1: Print the puzzle\n");
	 fprintf( stdout, "2: Update the puzzle\n" );
	 fprintf( stdout, "3: Quit the game\n" );
	 
	 fscanf( stdin, "%d", &choice );
	 
	 return choice;
	 
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
					long unsigned int* col ){
						
	fprintf( stdout, "Enter your choice: value row col:\n ");

	fscanf( stdin, "%d %lu %lu", value, row, col );
						
}

void update_puzzle( int sudoku[ROWS][COLS], int value, 
				long unsigned int row, long unsigned int col )
{
		
	sudoku[row][col] = value;
}
 
 
 
 
 
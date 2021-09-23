/* Author: Matthew Morrison
 * Email: matt.morrison@nd.edu 
 * File Name: sudoku_08.c
 * Date Created: 9/18/2021
 *
 *
 * This file contains the function definitions for
 * the Sudoku Combined Concepts lecture(s)
 **********************************************/

#include "sudoku_final.h"

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

unsigned check_user_input( int sudoku[ROWS][COLS], int value, 
					long unsigned int row, long unsigned int col )
{
	
	/* Check if there is a valid value at the location already */
	if( sudoku[row][col] != 0 ){
		
		fprintf( stdout, "Valid value %d at %ld, %ld\n", sudoku[row][col], row, col );
		
		return 0;
	}

	/* Check to make sure the input scanned value is between 1 and 9 */
	if ( value < 1 || value > 9 ){
		fprintf( stdout, "The value must be between 1 and 9. You entered %d\n", value );
		
		/* Return int of 0 for false */
		return 0;
	}
  
	/* Next, check to make sure the row is less than 9 */
	if( row >= 9 ){
		fprintf( stdout, "The row value must be between 0 and 8. You entered %lu\n", row );
		
		/* Return int of 0 for false */
		return 0;  
	}

	/* Next, check to make sure the column is less than 9 */
	if( col >= 9 ){
		fprintf( stdout, "The col value must be between 0 and 8. You entered %lu\n", col );
		
		/* Return int of 0 for false */
		return 0;  
	}

	/* Before inserting, first check if there if that value is already in a row */
	long unsigned int row_iter;
	for( row_iter = 0; row_iter < ROWS; ++row_iter ){

		if( sudoku[ row_iter ][ col ] == value ){

			fprintf( stdout, "There is already a %d at (%lu, %lu)\n", 
			value, row_iter, col );

			/* Return int of 0 for false */
			return 0;
		}
	}
  
  /* Next, if there if that value is already in a column */ 
	long unsigned int col_iter;
	for( col_iter = 0; col_iter < COLS; ++col_iter ){

		if( sudoku[ row ][ col_iter ] == value ){

			fprintf( stdout, "There is already a %d at (%lu, %lu)\n", 
			value, row, col_iter );

			/* Return int of 0 for false */
			return 0;
		}
	}
  

	/* Using mod to get the 3x3 box */

	long unsigned int row_begin =  row - (row % 3);
	long unsigned int row_end = row_begin + 2;
	  
	long unsigned int col_begin =  col - (col % 3);
	long unsigned int col_end = col_begin + 2;
  
	// Finally, iterate through row_min to row_main
	// And inside, iterate through col_min to col_max 
	for( row_iter = row_begin; row_iter <= row_end; ++row_iter ){

		for( col_iter = col_begin; col_iter <= col_end; ++col_iter ){	

			if( sudoku[ row_iter ][ col_iter ] == value ){

				fprintf( stdout, "There is already a %d at (%lu, %lu)\n", 
					value, row_iter, col_iter );

				return 0;
			}
		}	
	}
	
	/* Return int of 1 for true */
	return 1;
}


unsigned int check_puzzle( int sudoku[ROWS][COLS] ){

  long unsigned int row_iter;
  long unsigned int col_iter;
  
  for( row_iter = 0; row_iter < ROWS; ++row_iter ){
  
    for( col_iter = 0; col_iter < COLS; ++col_iter ){
    
      if( sudoku[ row_iter ][ col_iter ] == 0 )
        return 0;
    }
  }
  
  return 1;

}



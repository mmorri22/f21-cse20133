/* Author: Matthew Morrison
 * Email: matt.morrison@nd.edu 
 * File Name: main_08.c
 * Date Created: 9/18/2021
 *
 *
 * This file contains the main driver function for
 * the Sudoku Combined Concepts lecture(s)
 **********************************************/

#include "sudoku_final.h"

int main( void ){
	
	/* Print Greeting to User */
	print_greeting();
	
	/* Create the puzzle */
	int sudoku[ROWS][COLS] = { { 4, 1, 0, 2, 7, 0, 8, 0, 5 },
						   { 0, 8, 5, 1, 4, 6, 0, 9, 7 },
						   { 0, 7, 0, 5, 8, 0, 0, 4, 0 },
						   { 9, 2, 7, 4, 5, 1, 3, 8, 6 },
						   { 5, 3, 8, 6, 9, 7, 4, 1, 2 },
						   { 1, 6, 4, 3, 2, 8, 7, 5, 9 },
						   { 8, 5, 2, 7, 0, 4, 9, 0, 0 },
						   { 0, 9, 0, 8, 0, 2, 5, 7, 4 },
						   { 7, 4, 0, 9, 6, 5, 0, 2, 8 } };

	
	/* Get choice */
	int player_input = 1;
	
	/* User input choice declarations */
	int value;
	long unsigned int row;
	long unsigned int col;
	
	while( player_input != 3 ){
		
		player_input = player_choice();
		
		switch( player_input ){
			
			case 1:
				print_puzzle( sudoku );
				break;
				
			case 2:
				get_user_choice( &value, &row, &col );
				
				fprintf( stdout, "User input: %d %ld %ld\n", value, row, col );
				
				if( check_user_input( sudoku, value, row, col ) == 1 )
					update_puzzle( sudoku, value, row, col );
				
				break;	

			case 3:
				fprintf( stdout, "Ending the game...\n" );
				break;				
			
		}
		
		if( check_puzzle( sudoku ) ){
			
			fprintf( stdout, "You solved the puzzle!\n" );
			break;
		}
		
	}
	
	return 0;
}
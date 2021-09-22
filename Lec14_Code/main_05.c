/* Author: Matthew Morrison
 * Email: matt.morrison@nd.edu 
 * File Name: main_05.c
 * Date Created: 9/18/2021
 *
 *
 * This file contains the main driver function for
 * the Sudoku Combined Concepts lecture(s)
 **********************************************/

#include "sudoku_05.h"

int main( void ){
	
	/* Print Greeting to User */
	print_greeting();
	
	/* Create the puzzle */
	int sudoku[COLS] = { 4, 1, 0, 2, 7, 0, 8, 0, 5 };
	
	/* Get choice */
	int player_input = 1;
	while( player_input != 3 ){
		
		player_input = player_choice();
		
		switch( player_input ){
			
			case 1:
				print_puzzle( sudoku );
				break;
				
			case 2:
				fprintf( stdout, "Enter the choice\n" );
				break;	

			case 3:
				fprintf( stdout, "Ending the game...\n" );
				break;				
			
		}
		
	}
	
	return 0;
}
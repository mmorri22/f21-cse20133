/* Author: Matthew Morrison
 * Email: matt.morrison@nd.edu 
 * File Name: main_04.c
 * Date Created: 9/18/2021
 *
 *
 * This file contains the main driver function for
 * the Sudoku Combined Concepts lecture(s)
 **********************************************/

#include "sudoku_04.h"

int main( void ){
	
	/* Print Greeting to User */
	print_greeting();
	
	/* Get choice */
	int player_input = 1;
	while( player_input != 3 ){
		
		player_input = player_choice();
		
		switch( player_input ){
			
			case 1:
				fprintf( stdout, "Print the map\n" );
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
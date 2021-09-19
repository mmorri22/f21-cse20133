/* Author: Matthew Morrison
 * Email: matt.morrison@nd.edu 
 * File Name: main_03.c
 * Date Created: 9/18/2021
 *
 *
 * This file contains the main driver function for
 * the Sudoku Combined Concepts lecture(s)
 **********************************************/

#include "sudoku_03.h"

int main( void ){
	
	/* Print Greeting to User */
	print_greeting();
	
	/* Get choice */
	while( player_choice() != 3 )
		fprintf( stdout, "We are continuing the game\n" );
	
	return 0;
}
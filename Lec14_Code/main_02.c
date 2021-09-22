/* Author: Matthew Morrison
 * Email: matt.morrison@nd.edu 
 * File Name: main_02.c
 * Date Created: 9/18/2021
 *
 *
 * This file contains the main driver function for
 * the Sudoku Combined Concepts lecture(s)
 **********************************************/

#include "sudoku_02.h"

int main( void ){
	
	/* Print Greeting to User */
	print_greeting();
	
	/* Get choice */
	fprintf( stdout, "Player Choice was %c\n", player_choice ( ) );
	
	return 0;
}
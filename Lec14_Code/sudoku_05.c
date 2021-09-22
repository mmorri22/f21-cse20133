/* Author: Matthew Morrison
 * Email: matt.morrison@nd.edu 
 * File Name: sudoku_05.c
 * Date Created: 9/18/2021
 *
 *
 * This file contains the function definitions for
 * the Sudoku Combined Concepts lecture(s)
 **********************************************/

#include "sudoku_05.h"

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


void print_puzzle( int sudoku[COLS] ){

	long unsigned int iter;
	for( iter = 0; iter < COLS; ++iter ){
		
		fprintf( stdout, "%d ", sudoku[iter] );
		
	}
	fprintf( stdout, "\n" );
}






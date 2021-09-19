/* Author: Matthew Morrison
 * Email: matt.morrison@nd.edu 
 * File Name: sudoku_02.c
 * Date Created: 9/18/2021
 *
 *
 * This file contains the function definitions for
 * the Sudoku Combined Concepts lecture(s)
 **********************************************/

#include "sudoku_02.h"

void print_greeting( void ){
	
	fprintf( stdout, "Welcome to our Sudoku Game!\n" );
	
}

char player_choice ( void ){
	
	char player_choice;
	
	fprintf( stdout, "Enter your choice:\n" );
	fprintf( stdout, "1: Print the puzzle\n" );
	fprintf( stdout, "2: Make a change\n" );
	fprintf( stdout, "3: Quit the game\n" );
	
	player_choice = 'y';
	
	return player_choice;
	
}
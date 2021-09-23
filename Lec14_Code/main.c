/************************
 * File Name: main.c
 * Author: Howard Duck 
 * Email: ewb@nd.edu 
 *
 * This file contains the main driver function for Sudoku 
 ******************************/
 
 #include "sudoku.h"
 
 int main(){
	 
	 print_greeting();
	 
	int sudoku[ROWS][COLS] = { { 4, 1, 0, 2, 7, 0, 8, 0, 5 },
						   { 0, 8, 5, 1, 4, 6, 0, 9, 7 },
						   { 0, 7, 0, 5, 8, 0, 0, 4, 0 },
						   { 9, 2, 7, 4, 5, 1, 3, 8, 6 },
						   { 5, 3, 8, 6, 9, 7, 4, 1, 2 },
						   { 1, 6, 4, 3, 2, 8, 7, 5, 9 },
						   { 8, 5, 2, 7, 0, 4, 9, 0, 0 },
						   { 0, 9, 0, 8, 0, 2, 5, 7, 4 },
						   { 7, 4, 0, 9, 6, 5, 0, 2, 8 } };
	 
	 int player_choice = 0;

	int value;
	long unsigned int row;
	long unsigned int col;
	 
	 while( player_choice != 3 ){
		 
		 player_choice = get_player_choice();
		 
		 switch( player_choice ){
			 
			 case 1:
				print_puzzle( sudoku );
				break;
				
			 case 2:
				
				get_user_choice( &value, &row, &col );
				update_puzzle( sudoku, value, row, col );
				
				break;
				
			 case 3:
				fprintf( stdout, "Quit the Game\n");
				break;
			 
			 default:
				fprintf( stdout, "Incorrect value\n" );
				break;
		 }
	 }
	 
	 return 0;
 }
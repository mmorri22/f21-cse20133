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
	 
	 int sudoku[COLS] = { 4, 1, 0, 2, 7, 0, 8, 0, 5 };
	 
	 int player_choice = 0;
	 
	 while( player_choice != 3 ){
		 
		 player_choice = get_player_choice();
		 
		 switch( player_choice ){
			 
			 case 1:
				print_puzzle( sudoku );
				break;
				
			 case 2:
				fprintf( stdout, "Update the puzzle\n");
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
/* Author: Matthew Morrison
 * Email: matt.morrison@nd.edu 
 * File Name: sudoku_07.h
 * Date Created: 9/18/2021
 *
 *
 * This file contains the function declarations for
 * the Sudoku Combined Concepts lecture(s)
 **********************************************/
 
#ifndef SUDOKU_07_H
#define SUDOKU_07_H

#include <stdio.h>

#define ROWS 9
#define COLS 9

void print_greeting( void );

int player_choice ( void );

void print_puzzle( int sudoku[ROWS][COLS] );


#endif
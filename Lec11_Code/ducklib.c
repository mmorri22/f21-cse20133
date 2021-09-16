#include "ducklib.h"

#include <stdio.h>

void quack_Greeting(){
	
	fprintf( stdout, "Quack Quack!\n");
	fprintf( stdout, "Please consider donating to EWB\n" );
	
}

void display_rise_cost(){
	
	fprintf( stdout, "Go to South Dining Hall\n");
	
	fprintf( stdout, "Rides cose $%d\n", RIDECOST);
}
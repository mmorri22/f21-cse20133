#include <stdio.h>

int main(void){

	long time;	// Know C

	int a = 11;
	int b = 12;
	int c = 13;

	if( a == c  ){
		fprintf( stdout, "a is equal to c\n" );
	}
	else if( a == (c+2) ){
		fprintf( stdout, "a = c+2 \n");
	}
	else if( a != b ){
		fprintf( stdout, "a != b\n ");
	}
	else{
		fprintf( stdout, "No true!\n" );
	}


	return 0;
}







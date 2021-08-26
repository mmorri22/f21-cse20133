#include <stdio.h>

int main( void ){

	unsigned int student_class = 2;

	if( student_class == 1 ){
		fprintf( stdout, "Freshman!\n" );
	}
	else if( student_class == 2 ){
		fprintf( stdout, "Sophomore!\n" );
	}
	else if( stduent_class == 3 ){

		fprintf( stdout, "Junior\n" );
	}
	else{
		fprintf( stdout, "Senior or Graduated!\n" );
	}


	return 0;
}

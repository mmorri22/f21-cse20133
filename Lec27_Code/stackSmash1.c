#include <signal.h>
#include <stdio.h>
#include <string.h>

int main(){
	
	char realPassword[20];
	char givenPassword[20];
	
	fprintf( stdout, "realPassword  at %p\n", (void *)realPassword );
	fprintf( stdout, "givenPassword at %p\n", (void *)givenPassword );

	strcpy(realPassword, "Go Irish");
	
	fprintf( stdout, "givenPassword: %s\n", givenPassword);
	fprintf( stdout, "realPassword: %s\n", realPassword);
	
	return 0;
}


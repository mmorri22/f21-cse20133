#include <stdio.h>

int main(){
	
	fprintf( stdout, "stdout: %p\n", stdout );
	fprintf( stderr, "stderr: %p\n", stderr );
	
	return 0;
}


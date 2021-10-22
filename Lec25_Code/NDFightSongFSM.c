#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/* Time through the song and state */
	unsigned int timeThrough = 0;
	unsigned int state = 0;
	
	/* Keep going until we reach the end */
	while ( state <= 5 ){
		
		switch( state ){
			
			case 0:
				fprintf( stdout, "Begin song\n" );
				state = 1;
				break;
				
			case 1:
				fprintf( stdout, "Play Measures 1-20\n" );
				state = 2;
				break;
				
			case 2:
				fprintf( stdout, "Play Measures 21-34\n" );
				if( timeThrough == 0 ){
					timeThrough = 1;
					state = 3;
				}
				else{
					fprintf( stdout, "Second Time Through. Don't repeat.\n" );
					state = 4;
				}
				break;
				
			case 3:
				fprintf( stdout, "Play Measures 35-36\n" );
				fprintf( stdout, "Go back to measure 21\n" );
				state = 2;
				break;
				
			case 4:
				fprintf( stdout, "Play Measures 37-41\n" );
				state = 5;
				break;
				
			case 5:
				fprintf( stdout, "End of song!\n" );
				state = 6;
				break;
				
			default:
				fprintf( stdout, "Invalid state\n" );
				return EXIT_FAILURE;
				break;
			
		}
		
	}
	
	return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdint.h>

int main(){
	
    /* Set Calls to 2^15 - 1 */
    int16_t num_911_calls = 32767;
 
    /* Print values to the output */
    fprintf( stdout, "Initial: %d %x\n", num_911_calls, num_911_calls );
    
    /* Get one more call */
    num_911_calls = num_911_calls + 1;
    
    /* Create a variable tracking missed calls */
    unsigned int missed_calls = 1;

    while( missed_calls <= 6000 ){

        /* Print values to the output */
        fprintf( stdout, "Missed Call #%u: %d %x\n", 
		missed_calls, num_911_calls, num_911_calls  );

		/* Increment the missed calls */ 
		++missed_calls;
		++num_911_calls;
    }

    return 0;
}


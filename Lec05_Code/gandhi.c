#include <stdio.h>
#include <stdint.h>

int main()
{
    /* Set Gandhi to 2 */
    uint8_t ghandi_aggressive = 1;
    
    /* Print values to the output */
    fprintf( stdout, "Initial: %u %x\n", ghandi_aggressive, ghandi_aggressive );
    
    /* Became a democracy. Subtract 2 */
    ghandi_aggressive = ghandi_aggressive - 2;
    
    /* Print values to the output */
    fprintf( stdout, "Final: %u %x\n", ghandi_aggressive, ghandi_aggressive );

    return 0;
}


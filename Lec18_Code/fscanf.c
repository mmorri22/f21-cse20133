#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int int_input;
    char* char_input = (char*)malloc( 25 * sizeof(char) );
    float float_input;
    double double_input;
    
    // fscanf anf fprintf will go here
    
    free( char_input );
    
    return 0;
}







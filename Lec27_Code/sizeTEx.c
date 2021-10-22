#include <stdio.h>
#include <string.h>

int main ( )
{

    char* str1 = "Notre Dame 56 - USF 0";
    
    size_t length = strlen( str1 );
    
    fprintf( stdout, "The length of '%s' is %lu\n", str1, length );
    
    return 0;
    
}

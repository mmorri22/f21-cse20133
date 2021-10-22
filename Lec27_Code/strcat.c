#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ( )
{

    char* str1 = "USF's punter just got hit";
    char* str2 = ".\n";
    char* str3 = "... again!\n";
    char* str4 = (char *)malloc( 100 * sizeof(char) );
    
    strcat( str4, str1 );
    strcat( str4, str2 );
    strcat( str4, str1 );
    strcat( str4, str3 );  
    
    fprintf( stdout, "%s", str4 );
    
    return 0;
    
}
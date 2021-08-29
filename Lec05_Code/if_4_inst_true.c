#include <stdio.h>

int main( void )
{
    
    int left_choice = 5;
    int right_choice = 5;
    
    if( left_choice == right_choice ){
        
        fprintf( stdout, "1st line to skip prints left_choice %p %d %x\n",
                &left_choice, left_choice, left_choice );
 
        fprintf( stdout, "2nd line to skip prints right_choice %p %d %x\n",
                &right_choice, right_choice, right_choice ); 

        fprintf( stdout, "3rd line to skip prints their sum %d\n",
               left_choice + right_choice ); 
               
        fprintf( stdout, "4th line to skip prints their difference %d\n",
               left_choice - right_choice );         
    }
    
    fprintf( stdout, "5th line is the fprintf past the if statement\n");

    return 0;
}


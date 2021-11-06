/******************************************************************************
 *
 * Welcome to GDB Online.
 * GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
 * C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
 * Code, Compile, Run and Debug online from anywhere in world.
 *
 * *******************************************************************************/
#include <iostream>
#include <fstream>

int main()
{
    
    std::ifstream in_file( "test.txt" );
    
    int first, second;
    
    while( in_file >> first >> second ){
        
        
        int result = first + second;
        
        std::cout << first << " " << second << " " << result << std::endl;
        
    }
    
    in_file.close();

    return 0;
}


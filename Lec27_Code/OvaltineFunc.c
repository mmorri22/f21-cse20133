#include <stdio.h>
#include <ctype.h>

#define SIZE  40

void StrEncrypt( char* str, char* code );

void StrDecrypt( char* str, char* code );

int main() 
{
   char str[SIZE] = "Be sure to drink your Ovaltine";

   /* Initialize our code */
   char code[52] = 
        {'t','f','h','x','q','j','e','m','u','p',
         'i','d','c','k','v','b','a','o','l','r',
         'z','w','g','n','s','y'} ;

	/* Print the original phrase */
	fprintf (stdout, "Original phrase: %s\n", str);
   
	StrEncrypt( str, code );

	fprintf(stdout, "Encrypted: %s\n", str ) ;

	StrDecrypt( str, code );

	fprintf(stdout, "Decrypted: %s\n", str ) ;

	return 0;
}


void StrEncrypt( char* str, char* code ){

	unsigned int index, i;
	
	/* Encrypt */
    for (i = 0; str[i] != '\0'; i++) 
    {
        if(isalpha(str[i])) 
        {
	        char c = (char)tolower(str[i]) ;
	        index =  (unsigned int)(c - 'a') ;
	        str[i] = code[ index ] ;  
        } 
	}	
	
}


void StrDecrypt( char* str, char* code ){

	unsigned int index, i;
	
   /* Decrypt */
   for(i = 0; str[i] != '\0'; i++) 
   {
      if(isalpha(str[i])) 
      {
	    char c = (char)tolower(str[i]) ;

	    /* find matching character */
	    for(index = 0; index < 26; index++) 
        {
	        if(code[index] == c) 
	        {
	            str[i] = (char)('a' + index) ;
	        }  
	    } 
      }
   } 
}

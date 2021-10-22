#include <stdio.h>
#include <ctype.h>

#define SIZE  40

int main() 
{
   char c; 
   char* str = "Be sure to drink your Ovaltine";
   unsigned int index, i;

   /* Initialize our code */
   char code[52] = 
        {'t','f','h','x','q','j','e','m','u','p',
         'i','d','c','k','v','b','a','o','l','r',
         'z','w','g','n','s','y'} ;

   /* Print the original phrase */
   fprintf (stdout, "Original phrase: %s\n", str);

   /* Encrypt */
    for (i = 0; str[i] != '\0'; i++) 
    {
        if(isalpha(str[i])) 
        {
	        c = (char)tolower(str[i]) ;
	        index =  (unsigned int)(c - 'a') ;
	        str[i] = code[ index ] ;  
        } 
   }
   fprintf(stdout, "Encrypted: %s\n", str ) ;

   /* Decrypt */
   for(i = 0; str[i] != '\0'; i++) 
   {
      if(isalpha(str[i])) 
      {
	    c = (char)tolower(str[i]) ;

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
   fprintf(stdout, "Decrypted: %s\n", str ) ;

   return 0;
}

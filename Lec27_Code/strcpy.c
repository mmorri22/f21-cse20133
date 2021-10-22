#include <stdio.h>
#include <string.h>

int main () {
   char str1[20];
   char str2[20];

   //copying the string "Apple" to the str1
   strcpy(str1, "Apple");
   fprintf(stdout, "String str1: %s\n", str1);

   //copying the string "Banana" to the str2
   strcpy(str2, "Banana");
   fprintf(stdout, "String str2: %s\n", str2);

   //copying the value of str2 to the string str1
   strcpy(str1, str2); 
   fprintf(stdout, "String str1: %s\n", str1);

   return 0;
}

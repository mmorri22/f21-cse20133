#include "SortSearch.h" 

int main ( ) 
{
   int array[MAX], items; //, i ;

   fprintf(stdout, "Enter items, one per line.\n") ;
   fprintf(stdout, "End with sentinel: %d\n", SENTINEL) ;
   
   items = ReadArray(array, MAX) ;

   if (items == -1)
   {
      fprintf(stdout, "Too many items!!!\n") ;
   } 
   else 
   {
		fprintf(stdout, "\nInitial list:\n") ;
		printArray(array, items);
		
		/* Run Merge Sort */
		merge(array, 0, items-1) ;
      
		fprintf(stdout, "\nSorted list:\n") ;
		printArray(array, items);
		
		int searchVal;
		
		do{
			
			fprintf( stdout, "Enter an int >= 0 to find or -1 to quit: " );
			searchVal = GetValidInt();
			
			if( searchVal == -1 )
				continue;
			
			int result = FindElement( array, (unsigned int)items, searchVal );
			
			if( result == -1 ){
				
				fprintf( stdout, "%d not in array\n", searchVal );
				
			}
			else{
				
				fprintf( stdout, "%d in array at array[%d]\n", searchVal, result );
				
			}
			
		}while( searchVal != -1 );
	  
   }

   return 0;
}

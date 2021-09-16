#include <stdio.h>

#define TOTAL_SALES 7     /* number of business days */

/* Function Declarations */
void getSales( long unsigned int nrElements, int sales[ nrElements ] );
void printDay( long unsigned int Day );
void printSales( long unsigned int nrElements, int sales[ nrElements ]);
int AddSales ( long unsigned int nrElements, int sales[ nrElements ]);

int main ( )
{

	/* sales for each business day */
	int sales[ TOTAL_SALES ];
	
	getSales( TOTAL_SALES, sales );
   
	printSales( TOTAL_SALES, sales );

	int totalSales = AddSales ( TOTAL_SALES, sales );
                          
	fprintf (stdout, "\nTotal Sales: %d\n", totalSales);

	return 0;
}

void printDay( long unsigned int Day ){
	
	switch( Day ){
		
		case 0:
			fprintf( stdout, "Monday: ");
			break;
			
		case 1:
			fprintf( stdout, "Tuesday: ");
			break;
			
		case 2:
			fprintf( stdout, "Wednesday: ");
			break;
			
		case 3:
			fprintf( stdout, "Thursday: ");
			break;
			
		case 4:
			fprintf( stdout, "Friday: ");
			break;
			
		case 5:
			fprintf( stdout, "Saturday: ");
			break;
			
		case 6:
			fprintf( stdout, "Sunday: ");
			break;
			
		default:
			fprintf( stdout, "Unlike what The Beatles claim, there aren't 8 days in a week\n");
			break;
	}	
	
}

void getSales( long unsigned int nrElements, int sales[ nrElements ] ){
	
	for( long unsigned int i = 0; i < nrElements; i++ ){
		
		fprintf( stdout, "Enter the sales for ");
		
		printDay( i );
		
		fscanf( stdin, "%d", &sales[i] );
		
	}
}

void printSales( long unsigned int nrElements, int sales[ nrElements ] ){
	
   fprintf(stdout, "\n");
   for (long unsigned int day = 0; day < nrElements; day++)
   {
		fprintf(stdout, "Sales for day ");
	  
		printDay( day );
	  
		fprintf(stdout, " %d\n", sales[day]);
   }	
	
}

int AddSales (long unsigned int nrElements, int sales[ nrElements ])
{
   int total = 0;
   long unsigned int i;

   for (i = 0; i < nrElements; i++)
   {
      total += sales[i];
   }

   return total;
}
  
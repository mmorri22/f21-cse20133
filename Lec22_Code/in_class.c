#include <stdio.h>
#include <stdlib.h>

typedef struct lec22_struct{
	
	int the_int;
	float the_float;
	double the_double;
	
}lec22_struct;


typedef struct sll_node{
	
	int data;
	
	struct sll_node* next_node;
	
}sll_node;

void insert( sll_node* head_node, int data ){
	
	sll_node* new_node = (sll_node*)malloc( sizeof(sll_node) );
	new_node->data = data;
	new_node->next_node = NULL;
	
	sll_node* reference = head_node;

	while( reference->next != NULL ){
		
		reference = reference->next;
		
	}
	
	reference->next = new_node;
	
}


int main( ){

	lec22_struct static_str = { 1842, (float)-10.1, 22.6 };
	
	fprintf( stdout, "static_str add = %p\n", (void *)&static_str );
	
	fprintf( stdout, "%d %p\n", static_str.the_int,
				&(static_str.the_int) );

	fprintf( stdout, "%f %p\n", static_str.the_float,
				(void *)&(static_str.the_float) );

	fprintf( stdout, "%lf %p\n", static_str.the_double,
				(void *)&(static_str.the_double) );
				
				
	lec22_struct* dyn_str = (lec22_struct*)malloc( sizeof(lec22_struct) );

	dyn_str->the_int = 35;
	dyn_str->the_float = (float)19.1;
	dyn_str->the_double = -10.7;
	
	fprintf( stdout, "%p\n", dyn_str );

	fprintf( stdout, "%d %p\n", dyn_str->the_int,
				&(dyn_str->the_int) );

	fprintf( stdout, "%f %p\n", dyn_str->the_float,
				&(dyn_str->the_float) );

	fprintf( stdout, "%lf %p\n", dyn_str->the_double,
				&(dyn_str->the_double) );
				
	free( dyn_str );
	
	
	sll_node* head_node = (sll_node*)malloc( sizeof(sll_node) );
	head_node->data = 10;
	head_node->next_node = NULL;
	
	sll_node* node_2 = (sll_node*)malloc( sizeof(sll_node) );
	node_2->data = 20;
	node_2->next_node = NULL;

	head_node->next_node = node_2;

	sll_node* node_3 = (sll_node*)malloc( sizeof(sll_node) );
	node_3->data = 30;
	node_3->next_node = NULL;

	node_2->next_node = node_3;

	sll_node* reference = head_node;
	
	fprintf( stdout, "head node: %p %p\n", &reference, reference );
	
	while( reference != NULL ){
		
		fprintf( stdout, "%d %p %p\n", reference->data, reference, 
					reference->next_node );
		
		reference = reference->next_node;
	}
	
	free( node_3 );
	free( node_2 );
	free( head_node );
	

	return 0;
}

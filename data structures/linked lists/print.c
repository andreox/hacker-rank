#include <stdio.h>
#include <stdlib.h>

struct Node {
	
	int data ;
	struct Node *next ;
	
};

void print( struct Node *head ) {
	
	printf("%d\n",head->data);
	
	if ( head->next == NULL ) exit(0) ;
	
	else print(head->next);
	
}

int main( int argc, char** argv ) {
	
	struct Node s1 , s2 ;
	
	s2.data = 3 ;
	s2.next = NULL ;
	
	s1.data = 2 ;
	s1.next = &s2 ;
	
	print(&s1) ;
	
	return 0 ;
	
}

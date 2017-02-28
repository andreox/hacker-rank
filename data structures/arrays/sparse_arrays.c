#include <stdio.h>
#include <string.h>

int main( int argc, char** argv ) {
	
	int n , q , k ;
	scanf("%d",&n) ;
	
	char strings[n][20] ;
	
	int i ;
	for ( i = 0 ; i < n ; i++ ) scanf("%s",strings[i]) ;
	
	scanf("%d",&q) ;
	
	char s[20] ;
	int count_occur[q] ;
	
	for ( i = 0 ; i < q ; i++ ) {
		
		scanf("%s",s) ;
		
		count_occur[i] = 0 ;
		for ( k = 0 ; k < n ; k++ ) if ( strcmp( s , strings[k] ) == 0 ) count_occur[i]++ ;
		
		
	}
	
	for ( i = 0 ; i < q ; i++ ) printf("%d\n",count_occur[i]) ;
	
	return 0 ;
	
}

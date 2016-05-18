#include <stdio.h>
#include <stdbool.h>

int main() {

	int T , N ;

	scanf("%d",&T) ;

	int i ;
	for ( i = 0 ; i < T ; i++ ) {

		scanf("%d",&N) ;
		int j , k ;
		char matrix[N][N] ;

		for ( j = 0 ; j < N ; j++ ) {

			for ( k = 0 ; k < N ; k++ ) {

				scanf(" %c",&matrix[j][k]) ;

			}
		}

		for ( j = 0 ; j < N ; j++ ) {
			
			int tmp , z ;

			for ( k = 0 ; k < N ; k++ ) {

				for ( z = 0 ; z < N ; z++ ) {

					if ( matrix[j][k] < matrix[j][z]) {

						tmp = matrix[j][k] ;
						matrix[j][k] = matrix[j][z] ;
						matrix[j][z] = tmp ;
					}
				}
			}
		}

		//Check YES or NO
		bool tr = false ;
		for ( k = 0 ; k < N && !tr ; k++ ) {

			for ( j = 0 ; j < N-1 && !tr ; j++ ) {

				if ( matrix[j][k] > matrix[j+1][k] ) tr = true ; 
			}
		}

		if ( tr ) printf("NO\n") ;
		else printf("YES\n") ;
		
	}

	return 0 ;
}

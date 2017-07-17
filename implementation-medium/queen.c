#include <stdio.h>
#include <stdlib.h>

int N ;

int changeX( int x , int N ) {

	return N-x+1 ;
}

void printMatrix( int m[][N+1] ) {

	int z , k ;

	for ( z = 1 ; z <= N ; z++ ) {

		for ( k = 1 ; k <= N ; k++ ) {

			printf("%d ",m[z][k] ) ;

		}

		printf("\n") ;

	}

	printf("\n") ;

}

int countSteps( int m[][N+1], int dirX , int dirY , int queenX , int queenY ) {

	int i , j ;

	i = queenX+dirX ;
	j = queenY+dirY ;

	//printMatrix(m) ;

	int counter = 0 ;
	while ( i >= 1 && i <= N && j >= 1 && j <= N ) {

		//printf("%d\n",m[i][j]) ;

		if ( m[i][j] != 1 ) counter++ ;

		else return counter ;

		i += dirX ;
		j += dirY ;

	}

	return counter ;

}

int matrix[100001][100001] ;

int main( int argc , char** argv ) {

	int K ;

	scanf("%d %d",&N,&K);
	//Initialize matrix
	int i , j ;
	for ( i = 1 ; i <= N ; i++ ) {

		for ( j = 1 ; j <= N ; j++ ) {

			matrix[i][j] = 0 ;

		}
	}


	int queenX , queenY ;
	scanf("%d %d",&queenX,&queenY) ;

	queenX = changeX(queenX,N) ;
	//printf("%d %d\n",queenX,queenY) ;

	for ( i = 0 ; i < K ; i++ ) {

		int obsX , obsY ;
		scanf("%d %d",  &obsX, &obsY ) ;

		//printf("%d %d\n",changeX(obsX,N),obsY) ;

		matrix[changeX(obsX,N)][obsY] = 1 ;

	}


	//printMatrix( matrix ) ;

	int sum = 0 ;

	//printf("%d\n",sum) ;
	sum += countSteps( matrix, 1, 1, queenX, queenY) ; //diagonal bottom-right
	//printf("%d\n",sum) ;
	sum += countSteps( matrix, -1, -1, queenX, queenY) ; //diagonal top-left
	//printf("%d\n",sum) ;
	sum += countSteps( matrix, -1, 1, queenX, queenY) ; //diagonal top-right
	//printf("%d\n",sum) ;
	sum += countSteps( matrix, 1, -1, queenX, queenY) ; // diagonal bottom-left TO-FIX SEG-FAULT
	//printf("l\n") ;
	sum += countSteps( matrix, 1, 0, queenX, queenY) ; // row down
	//printf("l\n") ;
	sum += countSteps( matrix, -1, 0, queenX, queenY) ; //row up
	//printf("l\n") ;
	sum += countSteps( matrix, 0, -1, queenX, queenY) ; //column left
	//printf("l\n") ;
	sum += countSteps( matrix, 0, 1, queenX, queenY) ; //column right
	//printf("l\n") ;

	printf("%d\n",sum) ;

	return 0 ;

}

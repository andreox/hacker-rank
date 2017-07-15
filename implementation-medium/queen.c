#include <stdio.h>
#include <stdlib.h>

#define MAX 10001
int changeX( int x , int N ) {

	return N-x+1 ;
}

int countSteps( int m[MAX][MAX], int N , int dirX , int dirY , int queenX , int queenY ) {

	int i , j ;

	i = queenX+dirX ;
	j = queenY+dirY ;

	int counter = 0 ;
	while ( i >= 1 && i <= N && j >= 1 && j <= N ) {

		printf("%d\n",m[i][j]) ;

		if ( m[i][j] != 1 ) counter++ ;

		else return counter ;

		i += dirX ;
		j += dirY ;

	}

	return counter ;

}

int main( int argc , char** argv ) {

	int N , K ;

	scanf("%d %d",&N,&K);

	int matrix[N+1][N+1] ;

	//Initialize matrix
	int i , j ;
	for ( i = 1 ; i <= N+1 ; i++ ) {

		for ( j = 1 ; j <= N+1 ; j++ ) {

			matrix[i][j] = 0 ;

		}
	}

	int queenX , queenY ;
	scanf("%d %d",&queenX,&queenY) ;

	queenX = changeX(queenX,N) ;
	printf("%d %d\n",queenX,queenY) ;

	for ( i = 0 ; i < K ; i++ ) {

		int obsX , obsY ;
		scanf("%d %d",  &obsX, &obsY ) ;

		matrix[changeX(obsX,N)][obsY] = 1 ;

	}

	int sum = 0 ;

	printf("l\n") ;
	sum += countSteps( matrix, N, 1, 1, queenX, queenY) ; //diagonal bottom-right
	printf("l\n") ;
	sum += countSteps( matrix, N, -1, -1, queenX, queenY) ; //diagonal top-left
	printf("l\n") ;
	sum += countSteps( matrix, N, -1, 1, queenX, queenY) ; //diagonal top-right
	printf("l\n") ;
	sum += countSteps( matrix, N, 1, -1, queenX, queenY) ; // diagonal bottom-left TO-FIX SEG-FAULT
	printf("l\n") ;
	sum += countSteps( matrix, N, 1, 0, queenX, queenY) ; // row down
	printf("l\n") ;
	sum += countSteps( matrix, N, -1, 0, queenX, queenY) ; //row up
	printf("l\n") ;
	sum += countSteps( matrix, N, 0, -1, queenX, queenY) ; //column left
	printf("l\n") ;
	sum += countSteps( matrix, N, 0, 1, queenX, queenY) ; //column right
	printf("l\n") ;

	printf("%d\n",sum) ;

	return 0 ;

}

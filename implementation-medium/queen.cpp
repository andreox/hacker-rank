#include <iostream>
#include <vector>

using namespace std ;

int changeX( int x , int N ) {

	return N-x+1 ;

}

void printMatrix( vector< vector<int> > m, int N ) {

	for ( int z = 1 ; z <= N ; z++ ) {

		for ( int k = 1 ; k <= N ; k++ ) {

			cout << m[z][k] << " " ;

		}

		cout << endl ;

	}

}

int countSteps( vector< vector<int> > m , int N, int dirX, int dirY, int queenX, int queenY ) {

	int i = queenX + dirX ;
	int j = queenY + dirY ;

	int counter = 0 ;

	while ( i >= 1 && i <= N && j >= 1 && j <= N ) {

		if ( m[i][j] != 1 ) counter++ ;

		else return counter ;

		i += dirX ;
		j += dirY ;

	}

	return counter ;

}

int main( int argc , char** argv ) {

	int N , K ;

	cin >> N >> K ;

	vector< vector<int> > Matrix( N+1 , vector<int>(N+1)) ;

	for ( int i = 1 ; i <= N ; i++ ) {

		for ( int j = 1 ; j <= N ; j++ ) {

			Matrix[i][j] = 0 ;
		}
	}

	int queenX, queenY ;

	cin >> queenX >> queenY ;
	queenX = changeX( queenX , N) ;

	Matrix[queenX][queenY] = 2 ;

	for ( int i = 0 ; i < K ; i++ ) {

		int obsX , obsY ;
		cin >> obsX >> obsY ;

		Matrix[changeX(obsX,N)][obsY] = 1 ;

	}

	printMatrix( Matrix, N ) ;
	int sum = 0 ;

	sum += countSteps( Matrix, N, 1, 1, queenX, queenY) ; //diagonal bottom-right
	sum += countSteps( Matrix, N, -1, -1, queenX, queenY) ; //diagonal top-left
	sum += countSteps( Matrix, N, -1, 1, queenX, queenY) ; //diagonal top-right
	sum += countSteps( Matrix, N, 1, -1, queenX, queenY) ; // diagonal bottom-left TO-FIX SEG-FAULT
	sum += countSteps( Matrix, N, 1, 0, queenX, queenY) ; // row down
	sum += countSteps( Matrix, N, -1, 0, queenX, queenY) ; //row up
	sum += countSteps( Matrix, N, 0, -1, queenX, queenY) ; //column left
	sum += countSteps( Matrix, N, 0, 1, queenX, queenY) ; //column right

	cout << sum << endl ;

	return 0 ;
}

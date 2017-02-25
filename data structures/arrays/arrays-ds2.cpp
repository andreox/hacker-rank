#include <iostream>
#include <vector>

using namespace std ;

int sum( vector<vector<int>> m , int i , int j ) {

	return ( m[i][j] + m[i-1][j] + m[i+1][j] + m[i-1][j+1] + m[i-1][j-1] + m[i+1][j+1] + m[i+1][j-1] ) ;

}
int main( int argc , char** argv ) {

	const int R = 6 ;
	const int C = 6 ;

	vector< vector<int> > matrix( R , vector<int>(C) ) ;

	for ( int i = 0 ; i < R ; i++ ) {

		for ( int j = 0 ; j < C ; j++ ) 
			cin >> matrix[i][j] ;

	}

	int max = -10000 ;

	for ( int i = 1 ; i < R-1 ; i++ ) {

		for ( int j = 1 ; j < C-1 ; j++ ) {

			int k = sum( matrix , i , j ) ;
			if ( k > max ) max = k ;

		}
	}

	cout << max << endl ;

	return 0 ;
}

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std ;

int main( int argc , char** argv ) {

	string S ;
	cin >> S ;
	
	int L = S.length() ;
	double sqL = sqrt(L) ;

	double cl = ceil(sqL) ;
	double fl = floor(sqL) ;

	int row = (int) fl ;
	int column = (int) cl ;

	if ( (row*column) < L ) {

		if ( column > row ) row++ ;
		else column++ ;

	}

	vector< vector<char> > matrix( row, vector<char>(column) ) ;

	int counter = 0 ;
	int i = 0 ;
	int j = 0 ;

	while ( i < row && counter < L ) {

		while ( j < column && counter < L ) {

			matrix[i][j] = S[counter] ;
			counter++ ;
			j++ ;
		}
		j = 0 ;
		i++ ;
	}

	for ( j = 0 ; j < column ; j++ ) {

		for ( i = 0 ; i < row ; i++ ) {

			cout << matrix[i][j] ;

		}
		if ( j != column-1 ) cout << " " ;
	}

	return 0 ;
}

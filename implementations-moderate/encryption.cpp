#include <iostream>
#include <cmath>

using namespace std ;

int main() {

	string s ;

	cin >> s ;

	double L = s.length() ;

	int row = floor( sqrt(L) ) ;
	int column = ceil( sqrt(L) ) ;

	if ( row * column < L ) row = column ;

	char matrix[row][column] ;

	int index = 0 ;
	for ( int i = 0 ; i < row ; i++ ) {

		for ( int j = 0 ; j < column ; j++ ) {

			matrix[i][j] = s[index++] ;
		}

	}

	for ( int j = 0 ; j < column ; j++ ) {

		for ( int i = 0 ; i < row ; i++ ) {

			cout << matrix[i][j] ;
		}

		cout << " " ;
	}
}

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std ;

class Cell {

	public : 
		int depth ;
		bool is_cavity ;

};

int main( int argc , char** argv ) {

	int n ;
	cin >> n ;

	Cell m[n][n] ;

	for ( int i = 0 ; i < n ; i++ ) {

		for ( int j = 0 ; j < n ; j++ ) {

			scanf("%1d",&m[i][j].depth) ;
			m[i][j].is_cavity = false ;
		}
	}

	for ( int i = 1 ; i < n-1 ; i++ ) {

		for ( int j = 1 ; j < n-1 ; j++ ) {

			int x = m[i][j].depth ;

			if ( x > m[i][j+1].depth && x > m[i][j-1].depth && x > m[i+1][j].depth && x > m[i-1][j].depth )
				m[i][j].is_cavity = true ;
		}
	}

	for ( int i = 0 ; i < n ; i++ ) {

		for ( int j = 0 ; j < n ; j++ ) {

			if ( m[i][j].is_cavity ) cout << "X" ;
			else cout << m[i][j].depth ;
		}

		cout << endl ;
	}

	return 0 ;
}

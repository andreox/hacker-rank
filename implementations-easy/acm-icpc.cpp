#include <iostream>
#include <vector>
#include <string>

using namespace std ;

int main( int argc , char** argv ) {

	int N , M ;

	cin >> N >> M ;

	vector<string> matrix(N) ;

	for ( int i = 0 ; i < N ; i++ ) {

		cin >> matrix[i] ;

	}

	int max = 0 ;
	int count = 0 ;

	for ( int i = 0 ; i < N ; i++ ) {

		for ( int j = i+1 ; j < N ; j++ ) {

			int c = 0 ;

			for ( int k = 0 ; k < M ; k++ ) {

				int a = matrix[i][k] - '0' ;
				int b = matrix[j][k] - '0' ;
				if ( ( a || b ) == 1 ) c++ ;

			}

			if ( c > max ) {

				max = c ;
				count = 1 ;

			}

			else if ( c == max ) count++ ;

		}
	}

	cout << max << endl ;
	cout << count << endl ;

	return 0 ;
}

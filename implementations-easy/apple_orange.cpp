#include <iostream>

using namespace std ;

int main( int argc, char** argv ) {

	int s , t , a , b , m , n ;

	cin >> s >> t ;

	cin >> a >> b ;

	cin >> m >> n ;

	int count_apples = 0 ;

	for ( int i = 0 ; i < m ; i++ ) {

		int k ;
		cin >> k ;
		if ( a+k >= s && a+k <= t ) count_apples++ ;

	}

	int count_oranges = 0 ;

	for ( int i = 0 ; i < n ; i++ ) {

		int k ;
		cin >> k ;

		if ( b+k <= t && b+k >= s ) count_oranges++ ;
	}

	cout << count_apples << endl << count_oranges << endl ;

	return 0 ;
}

#include <iostream>

using namespace std ;

int main( int argc , char** argv ) {

	int n ;

	cin >> n ;

	int count_least, count_most ;

	int max , min ;

	count_most = count_least = 0 ;

	int value ;
	cin >> value ;

	max = min = value ;

	for ( int i = 1 ; i < n ; i++ ) {

		cin >> value ;

		if ( value > max ) {

			count_most++ ;
			max = value ;

		}

		else if ( value < min ) {

			count_least++ ;
			min = value ;

		}
	}

	cout << count_most << " " << count_least << endl ;

	return 0 ;
}
#include <iostream>
#include <vector>

using namespace std ;

int main( int argc , char** argv ) {

	vector<int> v(6) ;

	for ( int i = 1 ; i <= 5 ; i++ ) v[i] = 0 ;

	int N ;
	cin >> N ;

	for ( int i = 0 ; i < N ; i++ ) {

		int k ;
		cin >> k ;
		v[k]++ ;

	}

	int max = 0 ;
	int max_index = 0 ;

	for ( int i = 1 ; i <= 5 ; i++ ) if ( v[i] > max )  {

		max = v[i] ;
		max_index = i ;

	}

	cout << max_index << endl ;
	
	return 0 ;

}

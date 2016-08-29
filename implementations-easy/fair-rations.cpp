#include <iostream>
#include <vector>

using namespace std ;

int main( int argc , char* argv[] ) {

	int N ;
	cin >> N ;

	vector<int> rations(N) ;

	for ( int i = 0 ; i < N ; i++ ) cin >> rations[i] ;

	int count_bread = 0 ;

	for ( int k = 0 ; k < N-1 ; k++ ) {

		if ( rations[k] % 2 != 0 ) {

			rations[k]++ ;
			rations[k+1]++ ;
			count_bread += 2 ;
		}
	}

	bool tr = false ;

	for ( int k = 0 ; k < N && !tr ; k++ ) {

		//cout << rations[k] << " " ;
		if ( rations[k] % 2 != 0 ) tr = true ;

	}

	if ( tr ) cout << "NO" << endl ;
	else cout << count_bread << endl ;

	return 0 ;

}

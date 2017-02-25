#include <iostream>
#include <vector>

using namespace std ;

int main( int argc , char** argv ) {

	int N ;

	cin >> N ;

	vector<int> v(N) ;

	for ( int i = 0 ; i < N ; i++ ) cin >> v[i] ;

	for ( int i = N-1 ; i >= 0 ; i-- ) cout << v[i] << " " ;

	cout << endl ;

	return 0 ;
	
}

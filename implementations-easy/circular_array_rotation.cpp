#include <iostream>
#include <vector>

using namespace std ;

int main( int argc, char** argv ) {

	int n , k , q ;

	cin >> n >> k >> q ;

	if ( k > n ) k = k % n ;

	vector<int> v(n) ;

	for ( int i = 0 ; i < n ; i++ ) {

		int value ;
		cin >> value ;
		int index = i + k ;

		if ( index >= n ) index -= n ;
		v[index] = value ;

	}

	for ( int i = 0 ; i < q ; i++ ) {

		int in ;
		cin >> in ;
		cout << v[in] << endl ;

	}

	return 0 ;
}

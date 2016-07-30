#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main( int argc , char** argv ) {

	int n ;
	cin >> n ;

	vector<int> v ;

	for ( int i = 0 ; i < n ; i++ ) {

		int l ;
		cin >> l ;
		v.push_back(l) ;

	}

	vector<int> distances ;
	for ( int i = 0 ; i < n-1 ; i++ ) {

		for ( int j = i+1 ; j < n ; j++ ) {

			if ( v[i] == v[j] ) distances.push_back(j-i) ;
		}
	}

	if ( distances.empty() ) cout << "-1" << endl ;
	else cout << *min_element( distances.begin() , distances.end() ) << endl ;

	return 0 ;
}

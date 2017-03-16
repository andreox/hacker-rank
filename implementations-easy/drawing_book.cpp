#include <iostream>
#include <vector>

using namespace std ;

int main( int argc , char** argv ) {

	int n , p ;

	cin >> n ;
	cin >> p ;

	vector<int> right ;
	vector<int> left ;

	for ( int i = 0 ; i <= n ; i+=2 ) left.push_back(i) ;
	for ( int i = 1 ; i <= n ; i+=2 ) right.push_back(i) ;

	if ( p % 2 == 0 ) {

		int k ;
		for ( int i = 0 ; i < left.size() ; i++ ) if ( left[i] == p ) k = i ;

		if ( k > ( left.size() / 2 ) ) cout << left.size()-1-k << endl ;
		else cout << k << endl ;

	}

	if ( p % 2 != 0 ) {

		int k ;
		for ( int i = 0 ; i < right.size() ; i++ ) if ( right[i] == p ) k = i ;

		if ( k > ( right.size() / 2 ) ) cout << right.size()-1-k << endl ;
		else cout << k << endl ;
		
	}

	return 0 ;
}

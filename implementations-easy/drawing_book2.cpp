#include <iostream>
#include <vector>

using namespace std ;

int main( int argc , char** argv ) {

	int n , p ;
	cin >> n ;
	cin >> p ;

	int k ;
	if ( p % 2 == 0) k = 0 ;
	else k = 1 ;

	vector<int> interesting_pages ;

	int index ;
	int i = 0 ;
	for ( ; k <= n ; k+=2 ) {

		interesting_pages.push_back(k) ;
		if ( k == p )  index = i ;

		i++ ;

	}

	if ( index >= ( interesting_pages.size() / 2 ) ) cout << interesting_pages.size()-1-index << endl ;
	else cout << index << endl ;

	return 0 ;


}

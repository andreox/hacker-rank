#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main( int argc , char** argv ) {

	vector<int> a(1000010) ;

	fill( a.begin() , a.end() , 0 ) ;

	int n ;
	cin >> n ;

	int max = 0 ;
	int min = 10000 ;

	for ( int i = 0 ; i < n ; i++ ) {

		int tmp ;
		cin >> tmp ;
		if ( tmp > max ) max = tmp ;
		if ( tmp < min ) min = tmp ;
		a[tmp]++ ;

	}

	int m ;
	cin >> m ;

	for ( int i = 0 ; i < m ; i++ ) {

		int tmp ;
		cin >> tmp ;
		a[tmp]-- ;

	}

	for ( int i = min ; i <= max ; i++ ) if ( a[i] != 0 ) cout << i << " " ;

	cout << endl ;
	return 0 ;

}

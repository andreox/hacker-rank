#include <iostream>

using namespace std ;

bool check( int x1 , int v1 , int x2 , int v2 ) {

	int vel_diff = v1 - v2 ;
	int dist_diff = x2 - x1 ;

	if ( vel_diff == 0 || v2 > v1 ) return false ;

	if ( dist_diff % vel_diff == 0 ) return true ;

	return false ;
}

int main( int argc ,char** argv ) {

	int x1 , v1 , x2 , v2 ;

	cin >> x1 >> v1 >> x2 >> v2 ;

	check( x1 , v1 , x2 , v2 ) ? cout << "YES" << endl : cout << "NO" << endl ;

	return 0 ;
}

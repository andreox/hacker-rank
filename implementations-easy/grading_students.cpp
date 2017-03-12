#include <iostream>

using namespace std ;

int main( int argc, char** argv) {
	
	int N ;
	cin >> N ;
	
	for ( int i = 0 ; i < N ; i++ ) {
		
		int t ;
		cin >> t ;
		
		int k = t / 5 ;
		k++ ;
		if ( ( ((5*k)-t) < 3 ) && t >= 38 ) cout << 5*k << endl ;
		
		else cout << t << endl ;
		
	}
	
	return 0 ;
	
}

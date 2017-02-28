#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

void print( int i ) { cout << i << " " ; }

int main( int argc, char** argv ) {
	
	int n , d ;
	cin >> n >> d ;
	
	vector<int> array(n) ;
	
	for ( int i = 0 ; i < n ; i++ ) {
		
		int k , index ;
		index = i ;
		cin >> k ;
		index -= d ;
		if ( index < 0 ) index += n ;
		array[index] = k ;
		
	}
	
	for_each( array.begin() , array.end() , print ) ;
	
	cout << endl ;
	return 0 ;
	
}
	

#include <iostream>
#include <vector>

using namespace std ;

int main() {
	
	int n , d ;
	
	cin >> n >> d ;
	
	vector<int> v(n) ;
	
	for ( int i = 0 ; i < n ; i++ ) cin >> v[i] ;
	
	int count_trip = 0 ;
	for ( int i = 0 ; i < n-2 ; i++ ) {
		
		bool tr = false ;
		int mul = 1 ;
		
		for ( int j = i+1 ; j < n && !tr ; j++ ) {
			
			if ( v[j] - v[i] == (d*mul) ) mul++ ;
			if ( mul == 3 ) tr = true ;
			
		}
		
		if ( tr ) count_trip++ ;
		
	}
	
	cout << count_trip << endl ;
	
	return 0 ;
	
}

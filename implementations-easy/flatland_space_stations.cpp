#include <iostream>
#include <cmath>
#include <vector>

#define INF 9999999

using namespace std ;

int main() {
	
	int n , m ;
	
	cin >> n >> m ;
	
	vector<int> space_stations(m) ;
	
	for ( int i = 0 ; i < m ; i++ ) cin >> space_stations[i] ;
	
	int max = 0 ;
	for ( int i = 0 ; i < n ; i++ ) {
		
		int min = INF ;
		
		for ( int j = 0 ; j < m ; j++ ) {
			
			int x = abs( i - space_stations[j] ) ;
			if ( x < min ) min = x ;
			
		}
		
		if ( min > max ) max = min ;
		
	}
	
	cout << max << endl ;
	
	return 0 ;
	
}

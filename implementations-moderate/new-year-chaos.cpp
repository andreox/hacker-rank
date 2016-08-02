#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std ;

bool too_chaotic( vector<int> v , int n ) {
	
	for ( int i = 1 ; i <= n ; i++ ) {
		
		if ( v[i] - i > 2 ) return true ;
		
	}
	
	return false ;
	
}

int main() {
	
	int T ;
	cin >> T ;
	
	for ( int tc = 0 ; tc < T ; tc++ ) {
		
		int n ;
		cin >> n ;
		
		vector<int> v(n+1) ;
		
		for ( int i = 1 ; i <= n ; i++ ) cin >> v[i] ;
		
		if ( too_chaotic( v , n ) ) {
			
			cout << "Too chaotic" << endl ;
			continue ;
			
		}
		
		int count_swaps = 0 ;
		bool sort = false ;
		
		for ( int i = 1; i <= n-1 ; i++ ) {
			
			for ( int j = i+1 ; j <= n ; j++ ) {
				
				if ( v[i] > v[j] ) {
					
					int tmp = v[i] ;
					v[i]= v[j] ;
					v[j] = tmp ;
					count_swaps++ ;
				}
				
				if ( is_sorted( v.begin() , v.end() ) ) break ;
			}
			
			
		}
		
		cout << count_swaps << endl ;
		
	}
	
	return 0 ;
	
}

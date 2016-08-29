// Problem text at : https://www.hackerrank.com/challenges/sherlock-and-gcd

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main( int argc , char* argv[] ) {
	
	int T ;
	cin >> T ;
	
	for ( int t_c = 0 ; t_c < T ; t_c++ ) {
		
		int N ;
		cin >> N ;
		
		vector<int> nums(N)  ;
		
		for ( int i = 0 ; i < N ; i++ ) {
			
			cin >> nums[i] ;
			
		}
		
		int min = *min_element( nums.begin() , nums.end() ) ;
		
		int GCD = 1 ;
		
		for ( int i = 1 ; i <= min ; i++ ) {
			
			bool tr = true ;
			
			for ( int k = 0 ; k < N ; k++ ) {
				
				if ( nums[k] % i != 0 ) tr = false ;
				
			}
			
			if ( tr ) GCD = i ;
			
		}
		
		if ( GCD == 1 ) cout << "YES" << endl ;
		else cout << "NO" << endl ;
		
	}
	
	return 0 ;
	
}

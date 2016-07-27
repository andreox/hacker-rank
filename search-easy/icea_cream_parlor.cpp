//Problem text at : https://www.hackerrank.com/challenges/icecream-parlor

#include <iostream>
#include <vector>

using namespace std ;

class Number {
	
	public :
		int index ;
		int value ;
	
};


int main( int argc , char** argv ) {
	
	int T ;
	cin >> T ;
	
	for ( int tc = 0 ; tc < T ; tc++ ) {
		
		vector<Number> v ;
		int N , sum ;
		cin >> sum ;
		cin >> N ;
		
		for ( int i = 1 ; i <= N ; i++ ) {
			
			Number n ;
			cin >> n.value ;
			n.index = i ;
			v.push_back(n) ;
			
		}
		
		for ( int i = 0 ; i < N-1 ; i++ ) {
			
			for ( int j = i+1 ; j < N ; j++ ) {
				
				if ( v[i].value > v[j].value ) {
					
					Number tmp = v[i] ;
					v[i] = v[j] ;
					v[j] = tmp ;
					
				}
				
			}
			
		}
		
		//for ( int i = 0 ; i < N ; i++ ) cout << v[i].value << " " << v[i].index << endl ;
		
		bool tr = false ;
		
		for ( int i = 0 ; i < N && !tr ; i++ ) {
			
			int diff = sum - v[i].value ;
			
			for ( int j = 0 ; j < N ; j++ ) {
				
				if ( i == j ) continue ;
				if ( v[j].value == diff ) {
					
					( v[i].index < v[j].index ) ? cout << v[i].index << " " << v[j].index << endl : cout << v[j].index << " " << v[i].index << endl ;
					
					tr = true ;
					
				}
				
			}
			
		}
			
			
	}
	
	return 0 ;
	
}

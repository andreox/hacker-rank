//Problem at : https://www.hackerrank.com/challenges/cut-the-sticks
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main() {
	
	int N ;
	cin >> N ;
	vector<int> sticks(N) ;
	
	for ( int i = 0 ; i < N ; i++ ) cin >> sticks[i] ;
	
	
	sort( sticks.begin() , sticks.end() ) ;
	
	cout << sticks.size() << endl ;
	
	while ( sticks.size() > 1 ) {
		
		int sub = sticks[0] ;
		
		for ( int a = 0 ; a < sticks.size() ; a++ ) sticks[a] -= sub ;
		int i = 0 ;
		while ( i < sticks.size() ) {
			
			if ( sticks[i] <= 0 ) sticks.erase( sticks.begin()+i ) ;
			else i++ ;
			
		}
		
		
		if ( sticks.size() >= 1 ) cout << sticks.size() << endl ;
		
	}
	
	return 0 ;
	
}

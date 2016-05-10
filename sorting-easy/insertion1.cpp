#include <iostream>
#include <vector>

using namespace std ;

int main() {
	
	int N ;
	vector<int> V ;
	int e ;
	
	cin >> N ;
	int val ;
	for ( int i = 0 ; i < N-1 ; i++ ) {
		
		cin >> val ;
		V.push_back(val) ;
		
	}
	
	V.push_back(val) ;
	cin >> e ;
	bool tr = false ;
	for ( int i = V.size()-1 ; i > 0 && !tr ; i-- ) {
		
		if ( V[i-1] < e ) {
			
			V[i] = e ;
			tr = true ;
			
		}
		
		else V[i] = V[i-1] ;
		
		for ( int j = 0 ; j < N ; j++ ) cout << V[j] << " " ;
		cout << endl ;
		
	}
	
	if ( !tr ) {
		
		V[0] = e ;
		for ( int j = 0 ; j < N ; j++ ) cout << V[j] << " " ;
		cout << endl ;
		
	}
	
	
}

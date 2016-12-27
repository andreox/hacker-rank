#include <iostream>
#include <vector>
using namespace std ;

int main( int argc , char** argv ) {
	
	int N ;
	cin >> N ;
	vector<int> V(N) ;
	
	for ( int i = 0 ; i < N ; i++ ) cin >> V[i] ;
	
	int MAX = 0 ;
	
	for ( int i = 0 ; i < N ; i++ ) {
		
		int counter = 0 ;
		
		for ( int j = 0 ; j < N ; j++ ) if ( V[i] == V[j] ) counter++ ;
		
		if ( counter > MAX ) MAX = counter ;
		
	}
	
	cout << N-MAX << endl ;
	
	return 0 ;
	
}

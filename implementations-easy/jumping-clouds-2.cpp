#include <iostream>
#include <vector>

using namespace std ;

int main() {
	
	int N , K ;
	
	cin >> N >> K ;
	
	vector<int> clouds(N) ;
	
	for ( int i = 0 ; i < N ; i++ ) cin >> clouds[i] ;
	
	int E = 100 ;
	int z = K % N ;
	
	while ( z != 0 ) {
		
		if ( clouds[z] == 1 ) E -= 2 ;
		E -= 1 ;
		
		z = ( z + K ) % N ;
		
	}
	
	if ( clouds[0] == 1 ) E -= 2 ;
	E-= 1 ;
	
	cout << E << endl ;
	
	return 0 ;
	
}

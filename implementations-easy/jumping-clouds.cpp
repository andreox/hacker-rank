#include <iostream>
#include <vector>

using namespace std ;

int main( int argc , char** argv ) {
	
	int n ;
	cin >> n ;
	
	vector<int> v ;
	
	for ( int i = 0 ; i < n ; i++ ) {
		
		int num ;
		cin >> num ;
		v.push_back(num) ;
		
	}
	
	int counter = 0 ;
	int i = 0 ;
	
	while ( i < n-1 ) {
		
		if ( v[i+2] == 0 ) i += 2 ;
		else i++ ;
		
		counter++ ;
		
	}
	
	cout << counter << endl ;
	
	return 0 ;
	
}

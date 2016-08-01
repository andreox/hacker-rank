#include <iostream>
#include <string>

using namespace std ;


int check_sos( string s ) {
	
	int c = 0 ;
	for ( int i = 0 , j = 1 , k = 2 ; k < s.length() ; i+=3 , j+=3 , k+=3 ) {
		
		if ( s[i] != 'S' ) c++ ;
		if ( s[j] != 'O' ) c++ ;
		if ( s[k] != 'S' ) c++ ;
		
	}
	
	return c ;
	
}

int main() {
	
	string message ;
	cin >> message ;
	
	cout << check_sos(message) << endl ;
	
	return 0 ;
	
}

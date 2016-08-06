#include <iostream>
#include <string>

using namespace std ;

int main( int argc , char** argv ) {
	
	int n ;
	string s ;
	
	cin >> n ;
	cin >> s ;
	
	int changes = 0 ;
	
	for ( int i = 0 ; i < n ; ) {
		
		if ( s[i] == '0' && s[i+1] == '1' && s[i+2] == '0' ) {
			
			changes++ ;
			i += 3 ;
			
		}
		
		else i++ ;
		
	}
	
	cout << changes << endl ;
	
	return 0 ;
	
}

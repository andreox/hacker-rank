#include <iostream>
#include <string>

using namespace std ;

int main() {
	
	int n ;
	cin >> n ;
	
	for ( int i = 0 ; i < n ; i++ ) {
		
		string s , p ;
		cin >> s ;
		
		int amount = 0 ;
		
		for ( int j = 0 ; j < s.length() ; j++ ) {
			
			if ( p.find(s[j]) == string::npos ) {
				
				p.append(1,s[j]) ;
				amount++ ;
				
			}
		}
		
		cout << amount << endl ;
		
	}
	
	return 0 ;
	
}

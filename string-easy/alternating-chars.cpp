#include <iostream>
#include <string>

using namespace std ;

int main() {

	int N ;
	cin >> N ;

	for ( int i = 0 ; i < N ; i++ ) {

		string s ;
		cin >> s ;

		int deletions = 0 ;
		for( int j = 0 ; j < s.size()-1 ; j++ )
			if ( s[j] == s[j+1] ) deletions++ ;
		
		cout << deletions << endl ;
	}

	return 0 ;
}
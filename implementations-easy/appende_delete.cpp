#include <iostream>
#include <string>
#include <algorithm>

using namespace std ;

int main( int argc, char** argv ) {

	string s , t ;
	int k ;
	cin >> s ;
	cin >> t ;
	cin >> k ;

	int count = 0 ;

	if ( s == t && ( k % 2 == 0 || k >= s.length()*2 ) ) {

		cout << "Yes" << endl ;

	}

	else {

		count += s.length() ;
		count += t.length() ;

		int i = 0 ;
		int j = 0 ;
		int count_freq = 0 ;
		while ( i < s.length() && j < t.length() ) {

			if ( s[i] != t[j] ) break ;
			else count_freq++ ;
			i++ ;
			j++ ;

		}

		int op_needed = count - ( count_freq * 2 ) ;

		if ( (op_needed <= k && op_needed%2 == k%2) || s.length()+t.length() <= k ) cout << "Yes" << endl ;
		else cout << "No" << endl ;

	}

	return 0 ;
}

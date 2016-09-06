//Problem text at : https://www.hackerrank.com/challenges/funny-string

#include <iostream>
#include <string>
#include <cmath>

using namespace std ;

int main( int argc , char* argv[] ) {

	int T ;
	cin >> T ;

	for ( int t_c = 0 ; t_c < T ; t_c++ ) {

		string S ;
		cin >> S ;

		int i = 1 ;
		int j = S.length()-2 ;
		bool tr = false ;

		while ( j >= 0 & !tr ) {

			if ( abs( S[i] - S[i-1] ) != abs( S[j] - S[j+1] ) ) tr = true ;
			i++ ;
			j-- ;
		}

		if ( tr ) cout << "Not Funny" << endl ;
		else cout << "Funny" << endl ;

	}

	return 0 ;

}

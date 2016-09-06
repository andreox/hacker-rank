//Problem text at : https://www.hackerrank.com/challenges/funny-string
//Second solution

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std ;

int main( int argc , char* argv[] ) {

	int T ;
	cin >> T ;

	for ( int t_C = 0 ; t_C < T ; t_C++ ) {

		string S , R ;
		cin >> S ;
		R = S ;
		int len = S.length() ;
		reverse( R.begin() , R.end() ) ;

		bool tr = false ;

		for ( int i = 1 ; i < len && !tr ; i++ ) 
			if ( abs( S[i] - S[i-1] ) != abs( R[i] - R[i-1] ) ) tr = true ;

		if ( tr ) cout << "Not Funny" << endl ;
		else cout << "Funny" << endl ;
		
	}
}

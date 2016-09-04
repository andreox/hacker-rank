#include <iostream>
#include <string>

using namespace std ;

int main( int argc , char* argv[] ) {

	string S ;
	cin >> S ;

	int i = 0 ;

	while ( i < S.length() ) {

		if ( S[i] == S[i+1] ) {

			S.erase( S.begin()+i , S.begin()+i+2 ) ;
			i = 0 ;

		}

		else i++ ;

	}

	if ( !S.empty() ) cout << S << endl ;
	else cout << "Empty String" << endl ;

	return 0 ;
}

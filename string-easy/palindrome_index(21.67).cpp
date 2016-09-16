//Problem text at : https://www.hackerrank.com/challenges/palindrome-index
#include <iostream>
#include <string>

using namespace std ;

int main( int argc , char* argv[] ) {

	int T ;
	cin >> T ;

	for ( int tc = 0 ; tc < T ; tc++ ) {

		string S ;
		cin >> S ;

		int i = 0 ;
		int j = S.length()-1 ;

		int index = -1 ;
		bool cant_be_pal = false ;

		while ( i < j ) {

			if ( S[i] != S[j] ) {

				
				if ( S[i+1] == S[j] ) {

					index = i ;
					S.erase( S.begin()+i ) ;
					i = 0 ;
					j = S.length()-1 ;
					continue ;

				}

				else if ( S[j-1] == S[i] ) {

					index = j ;
					S.erase( S.begin()+j ) ;
					i = 0;
					j = S.length()-1 ;
					continue ;

				}

				else cant_be_pal = true ;

			}

			i++ ;
			j-- ;
		}

		if ( cant_be_pal ) cout << "-1" << endl ;
		else cout << index << endl ;

	}
}

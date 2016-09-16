//Problem text at : https://www.hackerrank.com/challenges/the-love-letter-mystery
#include <iostream>
#include <string>

using namespace std ;

int main( int argc , char* argv[] ) {

	int T ;
	cin >> T ;

	for ( int tc = 0 ; tc < T ; tc++ ) {

		string S ;
		cin >> S ;

		int amount_of_chngs = 0 ;
		int i = 0 ;
		int j = S.length()-1 ;

		while ( i < j ) {

			if ( S[i] > S[j] ) 
				amount_of_chngs += S[i]-S[j] ;

			else if ( S[i] < S[j] )
				amount_of_chngs += S[j]-S[i] ;

			i++ ;
			j-- ;
		}

		cout << amount_of_chngs << endl ;
	}

	return 0 ;
}

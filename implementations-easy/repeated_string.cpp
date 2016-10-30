#include <iostream>
#include <string>

using namespace std ;

int main( int argc , char** argv ) {

	string S ;
	unsigned long int k ;

	cin >> S ;
	cin >> k ;

	unsigned long int number_of_a = 0 ;
	for ( int i = 0 ; i < S.length() ; i++ ) if ( S[i] == 'a' ) number_of_a++ ;
	unsigned long int len = S.length() ;

	number_of_a *= (k/len) ;

	for ( int i = 0 ; i < (k%len) ; i++ ) if ( S[i] == 'a' ) number_of_a++ ;

	cout << number_of_a << endl ;

	return 0 ;
	
}

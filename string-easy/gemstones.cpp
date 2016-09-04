#include <iostream>
#include <map>
#include <algorithm>

using namespace std ;

int main( int argc , char** argv ) {

	map<char,int> occurs ;

	int N ;
	cin >> N ;

	int counter = 0 ;

	for ( int i = 1 ; i <= N ; i++ ) {

		string S ;
		cin >> S ;
		sort( S.begin() , S.end() ) ;
		string::iterator it_r = unique( S.begin() , S.end() ) ;
		S.resize( distance( S.begin() , it_r ) ) ;

		for ( int j = 0 ; j < S.length() ; j++ ) {

			occurs[ S[j] ]++ ;

			if ( occurs[ S[j] ] == N ) counter++ ;
		}
	}
    
	cout << counter << endl ;

	return 0 ;

}

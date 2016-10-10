//Problem text at : https://www.hackerrank.com/challenges/missing-numbers

#include <iostream>
#include <map>

using namespace std ;

int main( int argc , char** argv ) {

	int N_1 , N_2 ;

	cin >> N_1 ;

	map<int,int> numbers ;


	for ( int i = 0 ; i < N_1 ; i++ ) {

		int num ;
		cin >> num ;

		numbers[ num ]++ ;

	}

	cin >> N_2 ;

	for ( int i = 0 ; i < N_2 ; i++ ) {

		int num ;
		cin >> num ;

		numbers[ num ]-- ;

	}

	map<int,int>::iterator it ;

	for ( it = numbers.begin() ; it != numbers.end() ; it++ ) {

		if ( it->second < 0 ) cout << it->first << " " ;

	}

	cout << endl ;
	return 0 ;

}

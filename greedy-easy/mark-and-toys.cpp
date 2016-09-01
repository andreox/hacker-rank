//Problem text at : https://www.hackerrank.com/challenges/mark-and-toys

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std ;

int main( int argc , char* argv[] ) {

	unsigned long int N , K ;

	cin >> N >> K ;

	vector<unsigned long int> toys ;

	for ( int i = 0 ; i < N ; i++ ) {

		unsigned long int toy ;
		cin >> toy ;
		toys.push_back(toy) ;
	}

	int count_toys_bought = 0 ;
	unsigned long int sum = 0 ;

	sort( toys.begin() , toys.end() ) ;

	int i = 0 ;
	while ( toys[i] <= K ) {

		K -= toys[i] ;
		i++ ;
		count_toys_bought++ ;
	}

	cout << count_toys_bought << endl ;
	return 0 ;

}

//Problem text at : https://www.hackerrank.com/challenges/priyanka-and-toys

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

void print( int i ) { cout << i << " "  ;} 
int main( int argc , char* argv[] ) {

	int N ;
	cin >> N ;

	vector<int> W(N) ;

	for ( int i = 0 ; i < N ; i++ ) cin >> W[i] ;

	sort( W.begin() , W.end() ) ;

	int units = 0 ;

	for ( int i = 0 ; i < N ;) {

		int fix = W[i]+4 ;
		units++ ;

		while ( W[i] <= fix ) {

			i++ ;

		}

	}

	cout << endl << units << endl ;
	return 0 ;

}

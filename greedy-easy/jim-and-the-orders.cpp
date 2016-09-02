//Problem page at : https://www.hackerrank.com/challenges/jim-and-the-orders

#include <iostream>
#include <vector>

using namespace std ;

int main( int argc , char** argv ) {

	int N ;
	cin >> N ;

	vector<int> time(N+1) ;
	vector<int> order(N+1) ;

	for ( int i = 1 ; i <= N ; i++ ) {

		int t , d ;
		cin >> t >> d ;
		time[i] = t+d ;
		order[i] = i ;

	}

	int tmp = 0 ;
	for ( int i = 1 ; i <= N-1 ; i++ ) {

		for ( int j = i+1 ; j <= N ; j++ ) {

			if ( time[i] > time[j] ) {

				tmp = time[i] ;
				time[i] = time[j] ;
				time[j] = tmp ;

				tmp = order[i] ;
				order[i] = order[j] ;
				order[j] = tmp ;

			}
		}
	}

	for ( int i = 1 ; i <= N-1 ; i++ ) {

		if ( time[i] == time[i+1] && order[i] > order[i+1] ) {

			tmp = order[i] ;
			order[i] = order[i+1] ;
			order[i+1] = tmp ;
		}
	}

	for ( int i = 1 ; i <= N ; i++ ) cout << order[i] << " " ;
		cout << endl ;


	return 0 ;
}

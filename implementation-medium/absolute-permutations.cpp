//Problem text at : https://www.hackerrank.com/challenges/absolute-permutation

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm> 

using namespace std ;

void print( int i ) { cout << i << " " ; }

int main( int argc , char** argv ) {

	int T ;
	cin >> T ;

	for ( int t_c = 0 ; t_c < T ; t_c++ ) {

		int N , K ;

		cin >> N >> K ;

		vector<int> numbers(N+1) ;
		vector<int> P(N+1) ;

		for ( int i = 1 ; i <= N ; i++ ) numbers[i] = i ;

		if ( K == 0 ) {

			for_each( numbers.begin()+1 , numbers.end() , print ) ;
			cout << endl ;
			continue ;

		}


		bool tr = false ;

		for ( int i = 1 ; i <= N && !tr ; i++ ) {

			if ( i-K > 0 && numbers[i-K] != 0 ) {

					P[i] = numbers[i-K] ;
					numbers[i-K] = 0 ;

			}

			else if ( i+K <= N && numbers[i+K] != 0 ) {

					P[i] = numbers[i+K] ;
					numbers[i+K] = 0 ;

			}

			else tr = true ;
		}

		if ( tr ) cout << "-1" ;
		else for_each( P.begin()+1 , P.end() , print ) ;
		

		cout << endl ;

	}

	return 0 ;
}

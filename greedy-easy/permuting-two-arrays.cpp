//Problem page at : https://www.hackerrank.com/challenges/two-arrays

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

bool dec_order( int i , int j ) { return ( i>j ) ; }

int main( int argc , char** argv ) {

	int Q ;
	cin >> Q ;

	for ( int tc = 0 ; tc < Q ; tc++ ) {

		int N , K ;
		cin >> N >> K ;

		vector<int> A(N) ;
		vector<int> B(N) ;

		for ( int i = 0 ; i < N ; i++ ) cin >> A[i] ;
		for ( int i = 0 ; i < N ; i++ ) cin >> B[i] ;

		sort( A.begin() , A.end() ) ;
		sort( B.begin() , B.end() , dec_order ) ;

		int i = 0 ;
		bool tr = false ;

		while ( i < N && !tr ) {

			if ( A[i] + B[i] < K ) tr = true ;
			i++ ;
		}

		if (tr) cout << "NO" << endl ;
		else cout << "YES" << endl ;

	}

	return 0 ;


}

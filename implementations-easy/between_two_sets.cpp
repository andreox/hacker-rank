#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main( int argc , char** argv ) {

	int N , M ;

	cin >> N >> M ;

	vector<int> A(N) ;
	vector<int> B(M) ;

	for ( int i = 0 ; i < N ; i++ ) cin >> A[i] ;

	for ( int i = 0 ; i < M ; i++ ) cin >> B[i] ;

	int limit_inf = *max_element( A.begin() , A.end() ) ;
	int limit_sup = *min_element( B.begin() , B.end() ) ;
	int c_ounter = 0 ;

	for ( int x = limit_inf ; x <= limit_sup ; x++ ) {

		bool tr = true ;

		for ( int i = 0 ; i < N ; i++ ) if ( x % A[i] != 0 ) tr = false ;
		for ( int i = 0 ; i < M ; i++ ) if ( B[i] % x != 0 ) tr = false ;

		if ( tr ) c_ounter++ ;

	}

	cout << c_ounter << endl ;
	return 0 ;

}

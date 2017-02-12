#include <iostream>
#include <cmath>

using namespace std ;

unsigned long int T( int n ) { return ( (2*n) - 1 ) ; }

int main( int argc , char** argv ) {

	int T_c ;

	cin >> T_c ;

	unsigned long long int mod = pow( 10 , 9 ) + 7 ;
	cout << mod << endl ;

	for ( int i = 0 ; i < T_c ; i++ ) {

		unsigned long long int n ;
		unsigned long long int S_n = 0 ;

		cin >> n ;

		//for ( unsigned long int i = 1 ; i <= n ; i++ ) S_n += T(i) ;
		S_n = pow( (n%mod) , 2 ) ;
		cout << S_n % mod << endl ;

	}

	return 0 ;

}

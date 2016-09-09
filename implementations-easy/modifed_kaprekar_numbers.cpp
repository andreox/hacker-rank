#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std ;

void vectorize( unsigned long long int num , vector<int> &v ) {

	while ( num > 0 ) {

		v.push_back(num%10) ;
		num /= 10 ;

	}

	reverse( v.begin() , v.end() ) ;

}
bool isKaprekar( unsigned long long int n , vector<int> v ) {

	int num1 = 0 ;
	int exp_n = 1 ;

	for ( int i = ceil(v.size()/2)-1 ; i >= 0 ; i-- ) {

		num1 += ( v[i] * exp_n ) ;
		exp_n *= 10 ;

	}

	int num2 = 0 ;
	exp_n = 1 ;

	for ( int i = v.size()-1 ; i >= ceil(v.size()/2) ; i-- ) {

		num2 += ( v[i] * exp_n ) ;
		exp_n *= 10 ;

	}

	if ( (num1 + num2) == sqrt(n)) return true ;

	return false ;


}

int main( int argc , char* argv[] ) {

	long int p , q ;
	cin >> p >> q ;

	int count = 0 ;

	for ( long int i = p ; i <= q ; i++ ) {

		vector<int> number ;
		vectorize( i*i , number ) ;

		if ( isKaprekar( i*i , number ) ) {

			cout << i << " " ;
			count++ ;

		}

	}
	
	if ( count == 0 ) cout << "INVALID RANGE" ;
	cout << endl ;

	return 0 ;
}

#include <iostream>
#include <set>
#include <algorithm>

using namespace std ;

void print( int i ) { cout << i << " " ; }

int main( int argc , char** argv ) {

	int T ;

	cin >> T ;

	for ( int t_c = 0 ; t_c < T ; t_c++ ) {

		int n , a , b ;

		cin >> n ;
		cin >> a ; 
		cin >> b ;

		int mu_l_1 = n-1 ;
		int mu_l_2 = 0 ;

		set<int> last_stones ;

		while ( mu_l_1 >= 0 ) {

			last_stones.insert( ( mu_l_1 * a ) + ( mu_l_2 * b ) ) ;

			mu_l_2++ ;
			mu_l_1-- ;

		}

		for_each( last_stones.begin() , last_stones.end() , print ) ;
		cout << endl ;

	}

	return 0 ;

}

#include <iostream>
#include <vector>

using namespace std ;

int main() {
	
	int T ;
	cin >> T ;
	
	for ( int t_cases = 0 ; t_cases < T ; t_cases++ ) {
		
		long long int N , M , S ;
		
		cin >> N >> M >> S ;
		
		S = ( S + M ) % N ;
		
		
		( S == 1 || S == 0 ) ? cout << N << endl : cout << S-1 << endl ;
		
	}
	
	return 0 ;
	
}

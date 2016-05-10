#include <iostream>

using namespace std ;

int main() {
	
	int t ;
	cin >> t ;
	
	for ( int i = 0 ; i < t ; i++ ) {
		
		int N , C , M ;
		
		cin >> N >> C >> M ;
		int choco = 0 ;
		int wrappers = 0 ;
		
		while ( N >= C ) {
			
			N -= C ;
			choco++ ;
			wrappers++ ;
			
		}
		
		while ( wrappers >= M ) {
			
			wrappers -= M ;
			choco++ ;
			wrappers++ ;
			
		}
		
		cout << choco << endl ;
		
	}
	
}

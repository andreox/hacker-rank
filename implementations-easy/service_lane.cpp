//Problem at : https://www.hackerrank.com/challenges/service-lane

#include <iostream>
#include <vector>
#define MIN 4

using namespace std ;

int main() {
	
	vector<int> width ;
	int N , T ;
	
	cin >> N ;
	cin >> T ;
	
	for ( int i = 0 ; i < N ; i++ ) {
		
		int k ;
		cin >> k ;
		width.push_back(k) ;
		
	}
	
	for ( int _tcase = 0 ; _tcase < T ; _tcase++ ) {
		
		int i , j ;
		cin >> i ;
		cin >> j ;
		
		
		int min = MIN ;
		while ( i <= j ) {
			
			if ( width[i] < min ) min = width[i] ;
			i++ ;
			
		}
		
		cout << min << endl ;
		
	}
	
	return 0 ;
	
}

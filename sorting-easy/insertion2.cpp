#include <iostream>
#include <vector>

using namespace std ;

int main() {
	
	int N ;
	cin >> N ;
	vector<int> numbers ;
	
	for ( int k = 0 ; k < N ; k++ ) {
		
		int val ;
		cin >> val ;
		numbers.push_back(val) ;
		
	}
	
	int tmp ;
	
	for ( int i = 1 ; i < N ; i++ ) {
		
		for ( int j = i ; j > 0 ; j-- ) {
			
			if ( numbers[j-1] > numbers[j] ) {
				
				tmp = numbers[j-1] ;
				numbers[j-1] = numbers[j] ;
				numbers[j] = tmp ;
				
			}
			
		}
		
		for ( int z = 0 ; z < N ; z++ ) {
			
			cout << numbers[z] << " " ;
			
		}
		
		cout << endl ;
		
	}
	
	return 0 ;
	
	}

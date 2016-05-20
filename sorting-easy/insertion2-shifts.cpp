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
	int count_shifts = 0 ;
	
	for ( int i = 1 ; i < N ; i++ ) {
		
		for ( int j = i ; j > 0 ; j-- ) {
			
			if ( numbers[j-1] > numbers[j] ) {
				
				count_shifts++ ;
				tmp = numbers[j-1] ;
				numbers[j-1] = numbers[j] ;
				numbers[j] = tmp ;
				
			}
			
		}
		
		
	}
	
	cout << count_shifts << endl ;
	return 0 ;
	
	}

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std ;

int main ( int argc , char** argv ) {
	
	int i , j , k ;
	
	cin >> i >> j >> k ;
	int counter = 0 ;
  
	while ( i <= j ) {
		
		string s = to_string(i) ;
		reverse( s.begin() , s.end() ) ;
		int n = stoi( s , nullptr , 10 ) ;
		if ( abs(i-n) % k == 0 ) counter++ ;
		
		i++ ;
		
	}
	
  cout << counter << endl ;
	return 0 ;
	
}

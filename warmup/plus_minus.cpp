#include <iostream>
#include <iomanip>

using namespace std ;

int main( int argc , char** argv ) {
	
	float N ;
	cin >> N ;
	
	float pos , neg , zeros ;
	
	for ( int i = 0 ; i < N ; i++ ) {
		
		int k ;
		cin >> k ;
		
		if ( k > 0 ) pos++ ;
		else if ( k < 0 ) neg++ ;
		else zeros++ ;
		
	}
	
	cout << fixed ;
	cout << setprecision(6) << float(pos/N) << endl ;
	cout << setprecision(6) <<  float(neg/N) << endl ;
	cout << setprecision(6) << float(zeros/N) << endl ;
	
	return 0 ;
	
}

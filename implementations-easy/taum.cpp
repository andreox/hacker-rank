#include <iostream>

using namespace std ;

int main( int argc , char** argv ) {
	
	int T ;
	cin >> T ;

	for ( int t_c = 0 ; t_c < T ; t_c++ ) {
		
		unsigned long int B , W ;
		cin >> B >> W ;
		
		unsigned long int X , Y , Z ;
		cin >> X >> Y >> Z ;
		
		unsigned long int black_price = 0 ;
		unsigned long int white_price = 0 ;
		
		( X + Z < Y ) ? white_price = X+Z : white_price = Y ;
		( Y + Z < X ) ? black_price = Y+Z : black_price = X ;
		
		unsigned long int t_price = (black_price*B) + ( white_price*W ) ;
		
		cout << t_price << endl ;
		
	}
	
	return 0 ;

}

#include <iostream>


using namespace std ;

int main( int argc , char** argv ) {

	int n ;

	cin >> n ;

	int people_who_liked = 0 ;
	int like = 5/2 ;

	for ( int i = 0 ; i < n ; i++ ) {

		people_who_liked += like ;
		like = (like*3)/2 ;

	}

	cout << people_who_liked << endl ;
	return 0 ;

}

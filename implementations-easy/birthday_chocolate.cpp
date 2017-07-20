#include <iostream>
#include <vector>

using namespace std ;

int Sum( vector<int> v , int idx1 , int idx2 ) {

	int sum = 0 ;
	for ( ; idx1 <= idx2 ; idx1++ ) sum += v[idx1] ;

	cout << sum << endl ;

	return sum ;
}

int main( int argc , char** argv ) {

	int N ;
	cin >> N ;
	vector<int> v(N) ;

	for ( int i = 0 ; i < N ; i++ ) cin >> v[i] ;

	int M , D ;

	cin >> D >> M ;
	M-- ;

	int counter = 0 ;
	int sum ;
	for ( int i = 0 ; i < N-M ; i++ ) {

		sum = 0 ;
		for ( int j = i ; j <= i+M ; j++ ) {

			//cout << v[j] << " " ;
			sum += v[j] ;
		}	
		//cout << endl ;
		if ( sum == D ) counter++ ;
	} 

	cout << counter << endl ;

	return 0 ;
}

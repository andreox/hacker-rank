#include <iostream>
#include <vector>

using namespace std ;

int main( int argc , char** argv ) {

	int n , k ;
	cin >> n >> k ;

	vector<int> nums ;

	for ( int i = 0 ; i < n ; i++ ) {

		int val ;
		cin >> val ;
		nums.push_back(val) ;
	}

	int counter = 0 ;
	for ( int i = 0 ; i < n-1 ; i++ ) {

		for ( int j = i+1 ; j < n ; j++ ) {

			if ( (nums[i] + nums[j]) % k == 0 ) counter++ ;
		}
	}

	cout << counter << endl ;

	return 0 ;
}

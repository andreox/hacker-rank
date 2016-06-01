//Track at : https://www.hackerrank.com/challenges/maxsubarray

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main() {
	
	int T ;
	cin >> T ;
	
	for ( int i = 0 ; i < T ; i++ ) {
		
		vector<int> nums ;
		int dim ;
		cin >> dim ;
		bool tr = true ;
		for ( int j = 0 ; j < dim ; j++ ) {
			
			int v ;
			cin >> v ;
			if ( v > 0 ) tr = false ;
			nums.push_back(v) ;
			
		}
		
		vector<int> _sum_contig ;
		int sum = 0 ;
		int sum_nonc = 0 ;
		
		for ( int k = 0 ; k < dim ; k++ ) {
			
			sum += nums[k] ;
			( sum > nums[k] ) ? _sum_contig.push_back(sum) : _sum_contig.push_back(nums[k]) ;
			if ( nums[k] > 0 ) sum_nonc += nums[k] ;
			
		}
		
		cout << *max_element( _sum_contig.begin() , _sum_contig.end() )  << " " ;
		if ( tr ) cout << *max_element( nums.begin() , nums.end() ) << endl ;
		else cout << sum_nonc << endl ;
		
	}
	
	return 0 ;
	
}

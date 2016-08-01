#include <iostream>
#include <vector>

using namespace std ;

int main() {
	
	int N , K ;
	
	cin >> N >> K ;
	
	vector<int> chapters(N+1) ;
	
	for ( int i = 1 ; i <= N ; i++ ) cin >> chapters[i] ;
	
	int page = 1 ;
	int spec_prob = 0 ;
	
	for ( int i = 1 ; i <= N ; i++ ) {
		
		int probs = chapters[i] ;
		
		for ( int j = 1 ; j <= probs ; j++ ) {
			
			if ( page == j ) spec_prob++ ;
			if ( j % K == 0 && probs != j ) page++ ;
			
		}
		
		page++ ;
		
	}
	
	cout << spec_prob << endl ;
	
	return 0 ;
	
}

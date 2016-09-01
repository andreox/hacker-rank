//Problem text at : https://www.hackerrank.com/challenges/luck-balance

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

bool decr_order( int i , int j ) { return ( i > j ) ; } 

int main( int argc , char** argv ) {

	int N , K ;

	cin >> N >> K ;

	vector<int> imp_contests ;
	int amount_of_luck = 0 ;

	for ( int i = 0 ; i < N ; i++ ) {

		int v_1 , v_2 ;

		cin >> v_1 >> v_2 ;

		if ( v_2 == 1 ) imp_contests.push_back(v_1) ;
		else amount_of_luck += v_1 ;

	}

	sort( imp_contests.begin() , imp_contests.end() , decr_order ) ;

	for ( int i = 0 ; i < imp_contests.size() ; i++ ) {

		if ( i < K ) amount_of_luck += imp_contests[i] ;
		else amount_of_luck -= imp_contests[i] ;

	}
	
	cout << amount_of_luck << endl ;

	return 0 ;

}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

void print(int i) { cout << i << " " ; }


int main( int argc, char** argv ) {

	int N , Q ;

	cin >> N >> Q ;

	vector< vector<int> > seqList( N , vector<int>(0) ) ;
	int lastAns = 0 ;

	for ( int i = 0 ; i < Q ; i++ ) {

		int t_o_q , x , y , seq ; //t_o_q = type of query

		cin >> t_o_q >> x >> y ;

		switch( t_o_q ) {

			case 1 :

				seq = ( x ^ lastAns) % N ;
				seqList[seq].push_back(y) ;
				/*cout << lastAns << endl ;
				for ( int k = 0 ; k < N ; k++ ) {

					cout << k << ": " ;
					for_each( seqList[k].begin() , seqList[k].end() , print ) ;
					cout << endl ;

				}*/

				break ;

			case 2 :

				seq = ( x ^ lastAns ) % N ;
				lastAns = seqList[seq][(y % seqList[seq].size())] ;
				cout << lastAns << endl ;
				break ;
		}

	}

	return 0 ;
}

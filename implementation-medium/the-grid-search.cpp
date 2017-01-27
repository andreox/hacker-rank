#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#include <fstream>

using namespace std ;

int main( int argc, char** argv ) {

	int T ;
	//ifstream in("input.txt") ;
	cin >> T ;

	for ( int i = 0 ; i < T ; i++ ) {

		int R , C ;
		cin >> R >> C ;
		vector<string> matrix ;
		for ( int i = 0 ; i < R ; i++ ) {

			string s ;
			cin >> s ;
			matrix.push_back(s) ;

		}

		int r , c ;
		cin >> r >> c ;
		vector<string> mat_to_find ;
		for ( int i = 0 ; i < r ; i++ ) {

			string s ;
			cin >> s ;
			mat_to_find.push_back(s) ;

		} 

		int find_index = 0 ;
		vector<int> parallel(R) ;
		vector<int> parallel_findex(R) ;
		fill( parallel.begin() , parallel.end() , 0 ) ;

		for ( int i = 0 ; i < R && find_index < r ; i++ ) {

			size_t found = matrix[i].find( mat_to_find[find_index] ) ;
			if ( found != string::npos ) {

				parallel[i] = 1 ;
				parallel_findex[i] = found ;
				find_index++ ;

			}	
		}

		bool tr = false ;
		for ( int i = 0 ; i < R && !tr ; i++ ) {

			if ( parallel[i] == 1 ) {

				tr = true ;
				for ( int j = i+1 ; j < (i+r) && tr ; j++ ) {

					if ( parallel[j] == 0 || parallel_findex[j] != parallel_findex[j-1] ) tr = false ;

				}

				if ( tr ) break ;
			}

		}


		if ( tr) cout << "YES" << endl ;
		else cout << "NO" << endl ;

		//for ( int i = 0 ; i < R ; i++ ) cout << parallel[i] << endl ;
	}

	return 0 ;
}

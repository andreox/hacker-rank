#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

int main( int argc , char** argv) {

  int n ;
  cin >> n ;

  vector<int> p(n+1) ;

  for ( int i = 1 ; i <= n ; i++ ) cin >> p[i] ;

  for ( int x = 1 ; x <= n ; x++ ) {

    vector<int>::iterator find_index ;
    find_index = find( p.begin() , p.end() , x ) ;

    vector<int>::iterator res ;
    res = find( p.begin() , p.end() , distance( p.begin() , find_index ) ) ;

    cout << distance( p.begin() , res ) << endl ;

  }

  return 0 ;

}

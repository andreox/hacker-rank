#include <iostream>
#include <vector>

using namespace std ;

int main( int argc , char** argv) {

  int n ;
  cin >> n ;

  vector<int> p(n+1) ;

  for ( int i = 1 ; i <= n ; i++ ) cin >> p[i] ;

  for ( int x = 1 ; x <= n ; x++ ) {

    int find_index ;
    for ( int i = 1 ; i <= n ; i++ ) if ( p[i] == x ) find_index = i ;

    int res ;
    for ( int i = 1 ; i <= n ; i++ ) if ( p[i] == find_index) res = i ;

    cout << res << endl ;

  }

  return 0 ;
  
}

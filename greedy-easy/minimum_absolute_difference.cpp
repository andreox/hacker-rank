#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std ;

int main( int argc , char** argv ) {

  int n ;
  //ifstream in("input.txt") ;
    cin >> n ;

  vector<int> V(n) ;

  for ( int i = 0 ; i < n ; i++ ) {

    int k ;
    cin >> k ;
    V[i] = k ;

  }

  sort( V.begin() , V.end() ) ;

  long long int min = 999999999 ;
  for ( int i = 0 ; i < n ; i++ ) {

    if ( abs( V[i+1] - V[i] ) < min ) min = abs(V[i+1]-V[i]) ;

  }

  cout << min << endl ;

  return 0 ;

}

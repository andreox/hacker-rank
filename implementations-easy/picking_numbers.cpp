#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std ;

void print( int i ) { cout << i << " " ; }
int main( int argc , char** argv ) {

  int n ;
  cin >> n ;

  vector<int> v(n) ;

  for ( int i = 0 ; i < n ; i++ ) {

    int k ;
    cin >> k ;
    v[i] = k ;

  }

  sort( v.begin() , v.end() ) ;

  int max = 0 ;
  for ( int i = 0 ; i < n ; i++ ) {

    if ( abs(v[i+1] - v[i]) <= 1 ) {

      int count = 1 ;
      int j = i+1 ;
      while ( abs(v[j] - v[i]) <= 1 ) {

        count++ ;
        j++ ;

      }

      if ( count > max ) max = count ;

    }

  }

  cout << max ;
  cout << endl ;

  return 0 ;
}

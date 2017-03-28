//Incorrect solution. Commit to remember, needs to be fixed.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

bool check_if_sorted( vector<int> v ) {

  vector<int>::iterator it = v.begin()+1 ;
  for ( ; it != v.end()-1 ; it++ ) {

    if ( *it > *(it+1) ) return false ;

  }


  return true ;

}

int main( int argc , char** argv) {

  int N ;
  cin >> N ;

  vector<int> V(N+1) ;

  for ( int i = 1 ; i <= N ; i++ ) cin >> V[i] ;

  int k , z ;

  bool tr = true ;
  for ( int i = 1 ; i <= N ; i++ ) {

    if ( V[i] > V[i+1] && i != N) {

      //cout << "lol" << endl ;
      tr = false ;
      if ( i != z ) {

        k = i ;
        z = i+1 ;

      }

      else z++ ;

    }

    else if ( z - k == 1 ) {

      int tmp = V[z] ;
      V[z] = V[k] ;
      V[k] = tmp ;
      if ( check_if_sorted( V ) ) {

        cout << "yes" << endl << "swap " << k << " " << z << endl ;
        return 0 ;

      }

    }

    else if ( z - k > 1 ) {

      reverse( V.begin()+k , V.begin()+z+1 ) ; //Consider 1..n indexing , [first,last+1)
      if ( check_if_sorted( V ) ) {

        cout << "yes" << endl << "reverse " << k << " " << z << endl ;
        return 0 ;

      }

    }

  }

  if ( tr ) cout << "yes" << endl ;
  else cout << "no" << endl ;

  return 0 ;
}

#include <iostream>
#include <map>
#include <string>

using namespace std ;

bool yet_ladybgs( string s ) {

  for ( int i = 0 ; i < s.length() ; i++ ) {

    if ( s[i] != s[i+1] && s[i] != s[i-1] ) return false ;

  }

  return true ;

}

int main( int argc , char** argv ) {

  int g ;
  cin >> g ;

  while ( g > 0 ) {

    int n ;
    cin >> n ;
    string s ;
    cin >> s ;

    if ( yet_ladybgs(s) ) {

      cout << "YES" << endl ;
      g-- ;
      continue ;

    }
    
    map<char,int> associative ;
    for ( int i = 0 ; i < s.length() ; i++ )
      associative[s[i]]++ ;

    map<char,int>::iterator it = associative.begin() ;

    bool tr = false ;
    if ( associative['_'] >= 1 ) tr = true ;

    for ( ; it != associative.end() && tr ; it++ )
      if ( it->first != '_' && it->second < 2 ) tr = false ;

    if ( tr ) cout << "YES" << endl ;
    else cout << "NO" << endl ;

    g-- ;
  }

  return 0 ;
}

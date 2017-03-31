//Recursive pseudocode

function f( int max , int limit ) {

  int k = max - limit* n-times limit ;
  if ( k == 0 ) return true ;

  else if ( k is prime ) return false ;

  else {

    max = k ;
    limit = floor(sqrt(max));
    f( max , limit ) ;

  }

  return true ;
}

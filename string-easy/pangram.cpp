#include <iostream>
#include <string>
#include <set>
#include <locale>

using namespace std ;

int main() {
	
	string s ;
	locale loc ;
	set<char> alphabet ;
	char c = 'a' ;
	
	for ( int i = 0 ; i < 26 ; i++ ) {
		
		alphabet.insert(c) ;
		c += 1 ;
		
	}
	
	getline( cin , s ) ;
	for ( int i = 0 ; i < s.length() ; i++ ) {
		
		if ( s[i] == ' ' ) continue ;
		s[i] = tolower(s[i],loc) ;
		set<char>::iterator search = alphabet.find(s[i]) ;
		if ( search != alphabet.end() ) alphabet.erase(search) ;
		
	}
	
	if ( alphabet.empty() ) cout << "pangram" << endl ;
	else cout << "not pangram" << endl ;
	
	return 0 ;
	
}

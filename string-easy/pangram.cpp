#include <iostream>
#include <string>
#include <set>
#include <locale>

using namespace std ;

int main() {
	
	string s ;
	locale loc ;
	set<char> alphabet ;
	alphabet.insert('a') ;
	alphabet.insert('b') ;
	alphabet.insert('c') ;
	alphabet.insert('d') ;
	alphabet.insert('e') ;
	alphabet.insert('f') ;
	alphabet.insert('g') ;
	alphabet.insert('h') ;
	alphabet.insert('i') ;
	alphabet.insert('j') ;
	alphabet.insert('k') ;
	alphabet.insert('l') ;
	alphabet.insert('m') ;
	alphabet.insert('n') ;
	alphabet.insert('o') ;
	alphabet.insert('p');
	alphabet.insert('q') ;
	alphabet.insert('r') ;
	alphabet.insert('s') ;
	alphabet.insert('t') ;
	alphabet.insert('u') ;
	alphabet.insert('v') ;
	alphabet.insert('w') ;
	alphabet.insert('x') ;
	alphabet.insert('y') ;
	alphabet.insert('z') ;
	
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

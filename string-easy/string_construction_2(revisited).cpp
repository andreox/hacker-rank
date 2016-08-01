#include <iostream>
#include <string>
#include <list>

using namespace std ;

int main() {
	
	int n ;
	cin >> n ;
	
	for ( int i = 0 ; i < n ; i++ ) {
		
		string s ;
		cin >> s ;
		
		list<char> mylist;
		list<char>::iterator it = mylist.begin() ;
		
		mylist.insert( it , s.begin() , s.end() ) ;
		mylist.sort() ;
		mylist.unique() ;
		
		cout << mylist.size() << endl ;
		
	}
	
	return 0 ;
	
}

//Problem text at : https://www.hackerrank.com/challenges/designer-pdf-viewer

#include <iostream>
#include <string>
#include <map>

using namespace std ;

int main( int argc , char** argv ) {
	
	map<char,int> heights ;
	
	for ( int i = 0 ; i < 26 ; i++ ) {
		
		int h ;
		cin >> h ;
		heights['a'+i] = h ;
		
	}
	
	string S ;
	cin >> S ;
	
	int width = S.length() ;
	
	int max = 0 ;
	
	for ( int i = 0 ; i < S.length() ; i++ )
			if ( heights[S[i]] > max ) max = heights[S[i]] ;
			
	cout << width*max << endl ;
	
	return 0 ;
	
}
			

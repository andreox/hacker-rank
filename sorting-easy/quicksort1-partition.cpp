#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void partition(vector <int>  ar) {
   
    int p = ar[0] ;
    vector<int> left ;
    vector<int> center ;
    vector<int> right ;
    for ( int i = 0 ; i < ar.size() ; i++ ) {
        
        if ( ar[i] > p ) right.push_back(ar[i]) ;
        else if ( ar[i] < p ) left.push_back(ar[i]) ;
        else center.push_back(ar[i]) ;
            
    }
    
    for ( int i = 0 ; i < left.size() ; i++ ) cout << left[i] << " ";
    for ( int i = 0 ; i < center.size() ; i++ ) cout << center[i] << " " ;
    for ( int i = 0 ; i < right.size() ; i++ ) cout << right[i] << " " ;
    
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;
    
     for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

   partition(_ar);
   
   return 0;
}

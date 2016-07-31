#include <iostream>
#include <queue>

using namespace std ;

int main() {

	int n1 , n2 , n3 ;

	cin >> n1 >> n2 >> n3 ;

	queue<int> Q1 ;
	queue<int> Q2 ;
	queue<int> Q3 ;

	int sum1 = 0 ;
	for ( int i = 0 ; i < n1 ; i++ ) {

		int l ;
		cin >> l ;
		sum1 += l ;
		Q1.push(l) ;

	}

	int sum2 = 0 ;
	for ( int i = 0 ; i < n2 ; i++ ) {

		int l ;
		cin >> l ;
		sum2 += l ;
		Q2.push(l) ;

	}

	int sum3 = 0 ;
	for ( int i = 0 ; i < n3 ; i++ ) {

		int l ;
		cin >> l ;
		sum3 += l ;
		Q3.push(l) ;
	}

	bool tr = false ;

	while ( !tr ) {

		if ( sum1 == sum2 && sum2 == sum3 ) {

			tr = true ;
			continue ;

		}

		if ( sum1 > sum2 ) {

			if ( sum1 > sum3 ) {

				sum1 -= Q1.front() ;
				Q1.pop() ;

			}

			else {

				sum3 -= Q3.front() ;
				Q3.pop() ;
			}
		}

		else {

			if ( sum2 > sum3 ) {

				sum2 -= Q2.front() ;
				Q2.pop() ;
			}

			else {

				sum3 -= Q3.front() ;
				Q3.pop() ;

			}
		}

	}

	cout << sum1 << endl ;

	return 0 ;

}

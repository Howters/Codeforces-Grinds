	#include <iostream>
	#include <vector>
	#define lld long long int
	#include <bits/stdc++.h>  
	#define loop(x,n) for(int x = 0; x < n; x++)
	using namespace std;
	
	
	
	int main() {
	    int n,m;
	    cin >> n >> m;
	    int a[n+1], b[m+1];
	    int *mina, *maxa, *minb;
	    loop(i,n){
	    	cin >> a[i];
		}	
		loop(i,m){
			cin >> b[i];
		}
		
		mina = min_element(a,a+n);
		minb = min_element(b,b+m);
		maxa = max_element(a,a+n);
		
		if(2* *mina < *minb && 2* *mina >= *maxa){
			cout << 2* *mina << endl;
			return 0;
		}
		else if( 2* *mina < *maxa && *maxa < *minb){
			cout <<  *maxa << endl;
		}
		else {
			cout << -1 << endl;
		}
	   
	}

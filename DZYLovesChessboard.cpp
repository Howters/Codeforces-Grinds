#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
#define lld  long long int
#define for(x,n) for(int x = 0; x < n; x++)
		
using namespace std;


int main(){
	int n,m;
	cin >> n >> m;
	char c[n+1][m+1];
	for(i,n){
		int flag = 0;
		for(y,m){
			cin >> c[i][y];
			if(c[i][y] == '.'){
				i%2? (y%2==0? c[i][y]='B' :c[i][y] = 'W') : (y%2==0? c[i][y]='W' :c[i][y] = 'B');
			}	
		}
	}
	
	for(i,n){
		for(y,m){
			cout << c[i][y];
		}
		cout << endl;
	}
}
		

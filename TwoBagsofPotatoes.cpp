#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
#include <math.h>
#define lld  long long int
#define loop(x,n) for(int x = 1; x < n; x++)
using namespace std;


int main() {
	lld y,k,n;
	cin >> y >> k >> n;
	
	if (y == n || n < y) {
		cout << -1 << endl;
		return 0;
	}
	
	if(k == n){
		cout << k-y << endl;
		return 0;
	}
	
	// x + y < n && x + y % k == 0
	int first = 0;
	if(k > y){
		for(lld i=k-y;i < n-y+1;i++){
			if(first == 1){
				cout << i << " ";
				i+=k-1;
			}
			else if((y+i) % k == 0){
				cout << i << " ";
				first = 1;
				i+=k-1;
			}
		}
	}
	else if(k == y || k == 1){
		for(lld i=k;i < n-y+1;i++){
			if(first == 1){
				cout << i << " ";
				i+=k-1;
			}
			else if((y+i) % k == 0){
				cout << i << " ";
				first = 1;
				i+=k-1;
			}
		}
	}
	else{
		for(lld i=abs(k-(y%k));i < n-y+1;i++){
			if(first == 1){
				cout << i << " ";
				i+=k-1;
			}
			else if((y+i) % k == 0){
				cout << i << " ";
				first = 1;
				i+=k-1;
			}
		}	
	}
	
	if (first == 0){
		cout << -1 << endl;
		return 0;
	}

    return 0;
}

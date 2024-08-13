#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
#include <math.h>
#define lld  long long int
#define loop(x,n) for(int x = 0; x < n; x++)
using namespace std;


int main(){
	lld n;
	cin >> n;
	lld arr[n+1];
	lld sum = 0;
	loop(i,n){
		cin >> arr[i];
		sum += arr[i];
	}
	if(sum%n != 0){
		cout << n-1 << endl;
	}
	else {
		cout << n << endl;
	}

}

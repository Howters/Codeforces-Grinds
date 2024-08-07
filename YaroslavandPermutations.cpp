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
	lld n,a;
	cin >> n;
	lld count[1001]={0};
	
	loop(i,n){
		cin >> a;
		count[a]++;
		if(count[a] > (n+1)/2){
			cout << "NO" << endl;
			return 0;
		}
	}
	
	cout << "YES"  << endl;
	
	
	return 0;

}

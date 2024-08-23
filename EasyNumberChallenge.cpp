#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
#include <math.h>
#define lld  long long int
#define loop(x,n) for(int x = 0; x < n; x++)
using namespace std;


int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int cache[1000005] = {0};
    for(int i = 1; i<=1000000; i++){
    	for(int j = 1 ;j <=i; j+=i){
    		cache[j]++;
		}
	}
    
	int sum = 0;
	for(int i = 1 ; i <= a; i++){
		for(int j = 1 ; j <= b ; j++){
			for(int k = 1 ; k <= c ; k ++){
				sum += cache[i*j*k];
			}
		}
	}
	cout << sum << endl;
    return 0;
}

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
    int n;
    cin >> n;
    int x = n;
    int sw = 0;
    for(int i = 0 ; i< n*2 -1 ; i++){
    	for(int j = 0 ; j < x ; j++){
    		cout << x;
		}
		cout << endl;
		if(sw == 0){
			x--;
		}
		if(sw == 1){
			x++;
		}
		if(x <= 0 ){
			sw =1;
			x+=2
			;
		}
	}
}

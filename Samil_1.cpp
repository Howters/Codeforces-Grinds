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
    int x = n, y=n, z=1;
    for(int i = 0 ;i < n*2; i++){
    	for(int j = 0 ; j < x; j++){
    		cout << "*" ;
		}
		x--;
		cout << endl;
		if(x <= 0){
			for(int j = 0 ; j < y; j++){
	    		cout << " " ;
			}
			for(int k = 0;k < z ; k++){
				cout << "*";
			}
			y--;
			z++;
		}
	}
}

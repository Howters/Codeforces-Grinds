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
	lld min,max;
	lld arr[n][3];
	loop (i,n){
			cin >> arr[i][0] >> arr[i][1];
			lld a = arr[i][0];
			lld b = arr[i][1];
			if(i==0){
				min = a;
				max = b;
			}
			else{
				if(a <= min){
					min = a;
				}
				if(b >= max){
					max = b;
				}
			}
			
	}
	
	loop (i,n){
		if(arr[i][0] == min && arr[i][1] == max){
			cout << i+1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;

}

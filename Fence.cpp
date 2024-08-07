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
	lld n,k;
	cin >> n >> k;
	lld arr[n+1]={0},check = 0;
	loop (i,n){
		cin >> arr[i];
		if(i >0){
			if (arr[i] != arr[i-1]){
				check = 1;
			}
		}
	}
	
	if(check == 0){
		cout << 1 << endl;
		return 0;
	}
	lld index = -1, min = -1, sum = 0, start = 0, count = 0;
	if(n==k){
		cout << 1 << endl;
		return 0;
	}
	loop (i,n){
		sum+= arr[i];
		count ++;
		if(count == k){
			if(min == -1){
				min = sum;
				index = start + 1;
			}
			else if(sum < min){
				min = sum;
				index = start +1 ;
			}
		sum = 0;
		i = start++;
		count = 0;
		}
	}
	cout << index << endl;
	return 0;

}

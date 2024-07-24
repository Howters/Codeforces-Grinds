#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
#define lld  long long int
#define loop(x,n) for(int x = 0; x < n; x++)
		
using namespace std;

bool checkArr(vector<lld> arr){
	loop(i, arr.size()-1){
		if(arr[i]!=arr[i+1]){
			return false;
		}
	}
	return true;
}

int main(){
	
	lld k,n;
	
	cin >> n >> k;
	vector<lld> arr;
	loop(i,n){
		lld temp;
		cin >> temp;
		arr.push_back(temp);
	}
	lld num, count = 0;
	for(lld i=n-1;i>=0;i--){
		if(arr[i]!=arr[k-1]){
			if(i+1>k){
				cout << "-1" << endl;
				return 0;
				break;
			}
			else{
				cout << i+1 << endl;
				return 0;
				break;
			}
		}
	}
	
	cout << 0 <<endl;
	
	
}

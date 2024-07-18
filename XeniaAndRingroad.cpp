#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
#define lld  long long int
#define for(x,n) for(int x = 0; x < n; x++)
		
using namespace std;


int main(){
	lld n,m;
	cin >> n >> m;
	lld h[n+1], task[m+1];
	for(i,m){
		
		cin>>task[i];
	}
	lld sum = 0 ;
	for(i,m){
		if(i == 0){
			sum+= task[i] - 1 ;
		}
		else{
			if(task[i] < task[i-1]){
				sum+= n - task[i-1] + task[i];
			}
			else if(task[i] > task[i-1]){
				sum+= task[i] - task[i-1];
			}
		}
	}
	
	cout << sum;
	
}
		

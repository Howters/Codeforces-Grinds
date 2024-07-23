#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
#define lld  long long int
#define fors(x,n) for(int x = 0; x < n; x++)
		
using namespace std;

lld arr[6][6]={0};

lld countPair(lld x,lld y, lld arr[6][6]){
//	cout << *arr[x] << " " << *arr[y];
	return (arr[x][y] + arr[y][x]);
}

lld countArr(lld seq[]){
//	cout << seq[0] << seq[1] << endl;
	return (countPair(seq[0]-1,seq[1]-1,arr) + countPair(seq[2]-1,seq[3]-1,arr)*2 + countPair(seq[3]-1,seq[4]-1,arr)*2 + countPair(seq[1]-1,seq[2]-1,arr));
}
int main(){
	
	fors(i,5){
		fors(j,5){
			cin >> arr[i][j];
		}
	}
	
	lld sum=0,countSum=0;
	
	lld num[6] = {1,2,3,4,5}, ans[6]={0};
	int n = 5;
	do {
    // Output the current permutation
    for(int i = 0; i < n; ++i){
        ans[i]= num[i];
	}
	countSum=countArr(ans);
	
	if(countSum>sum){
		sum = countSum;
	}
	countSum=0;
	
	} while (next_permutation(num, num + n));
	
	cout << sum << endl;
	
}

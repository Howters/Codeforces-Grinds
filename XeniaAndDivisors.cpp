#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
#define lld  long long int
#define loop(x,n) for(int x = 0; x < n; x++)
		
using namespace std;

int main(){
	lld n,flag=0;
	cin >> n;
	lld arr[n+1]={0},count[20]={0}, temp = n;
	
	loop(i, n){
		cin >> arr[i];
		count[arr[i]]++;
	}
	
	do{
		if(count[1]>0 && count[2] > 0 && count[4] > 0){
			count[1]--; count[11]++; count[2]--;count[12]++; count[4]--; count[14]++;
			flag = 1;
		}
		else if(count[1]>0 && count[2] > 0 && count[6] > 0){
			count[1]--; count[11]++; count[2]--;count[12]++; count[6]--;count[16]++;
			flag = 1;
		}
		else if(count[1]>0 && count[3] > 0 && count[6] > 0){
			count[1]--; count[11]++; count[3]--; count[13]++; count[6]--;count[16]++;
			flag = 1;
		}
		else{
			cout << -1 << endl;
			return 0;
		}
		
		if(count[1]==0 && (count[2]>0 || count[3] >0 || count[4] > 0 || count[6]>0 || count[5]>0 || count[7]>0)  ){
			cout << -1 << endl;
			return 0;
		}
	} while(count[1]>0);
		
	do{
		if(count[11]>0 && count[12] > 0 && count[14] > 0){
			cout << 1 << " "<< 2 <<" "<< 4 << endl;
			count[11]--; count[12]--; count[14]--;
			flag = 1;
		}
		else if(count[11]>0 && count[12] > 0 && count[16] > 0){
			cout << 1 << " "<< 2 <<" "<< 6 << endl;
			count[11]--; count[12]--; count[16]--;
			flag = 1;
		}
		else if(count[11]>0 && count[13] > 0 && count[16] > 0){
			cout << 1 << " "<< 3 <<" "<< 6 << endl;
			count[11]--; count[14]--; count[16]--;
			flag = 1;
		}
	} while(count[11]>0);
}

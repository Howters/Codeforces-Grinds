#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
#define lld  long long int
#define loop(x,n) for(int x = 0; x < n; x++)
		
using namespace std;

int main(){
	int n;
	cin >> n;
	int count1=0, count2=0;
	loop(i,n){
		int x;
		cin >> x;
		if(x == 100){
			count1++;
		}
		else {
			count2++;
		}
	}
	if((count1 == 1 && count2 == 0) || (count1==0 && count2==1) || (count1%2==1 && count2 == 0) || (count2%2==1 && count1==0)){
		cout << "NO" << endl;
		return 0;
	}
	if(count1 %2 ==1){
		 cout << "NO"<<endl;
	}
	else{
		cout << "YES" << endl;
	}
//	cout << count1 << " " << count2 << endl;


}

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
	int nx;
	cin >> nx;
	string arr;
	
	int n = nx*2;
	cin >> arr;
	int arrleft[n],arrright[n];
	
	loop(i,(n/2)){
		arrleft[i] = arr[i]-'0';
	}
	int index = 0;
	for(int i = (n/2); i <= n+1; i++){
		arrright[index++] = arr[i]-'0';	
	}
	
	sort(arrleft, arrleft + n/2);
    sort(arrright, arrright + n/2);
//	loop(i,(n/2)){
//		cout << i << " " << arrleft[i] << arrright[i] << endl;
//	}

	int meth = -1;
	int counta=0,countb=0,countc=0;
	loop(i,(n/2)){
//		cout << i << " " << arrleft[i] << arrright[i] << endl;
		if(arrleft[i] < arrright[i]){
			counta++;
		}
		else if(arrleft[i] > arrright[i]){
			countb++;
		}
		else {
			countc++;
		}
	}
	
	
	//2412
	//3444
//	a = 2
//	b = 0 
//	c = 1
//	cout << counta << " " << countb<<" " << countc;
	int maks = max(counta,countb);
	maks = max(maks,countc);
	if(countc > counta || countc > countb){
	
			cout << "NO" << endl;
			return 0;
		
	}
	if(counta == maks){
		if(countb!=0 || counta==countc){
			cout << "NO" << endl;
			return 0;
		}
	}
	else if(countb == maks) {
		if(counta !=0 || countb==countc){
			cout << "NO" << endl;
			return 0;
		}
	}
	else if(countc == maks){
		cout << "NO" << endl;
			return 0;
	}
	
//	cout << counta << countb<< endl;
	cout << "YES" <<endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
#define lld  long long int
#define loop(x,n) for(int x = 0; x < n; x++)
		
using namespace std;

int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	if(a.length() != b.length()) {
		cout << "NO\n";
		return 0;
	}
	lld count = 0;
	lld arrA[28]={0},arrB[28]={0};
	loop(i,b.length()){
		arrA[a[i]-'a']++;
		arrB[b[i]-'a']++;
	}
	
	loop(i,28){
		if(arrA[i] != arrB[i]){
			cout << "NO\n";
			return 0;
		}
	}
	
	
	loop(i,b.length()){
		if(b[i] != a[i]){
			count++;
		}
		if (count > 2){
			cout << "NO\n";
			return 0;
		}
	}
	
	cout << "YES\n";

}

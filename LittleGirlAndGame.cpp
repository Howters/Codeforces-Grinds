#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
#define lld  long long int
#define for(x,n) for(int x = 0; x < n; x++)
		
using namespace std;

int main(){
	char s[1005];
	int a[30]={0},countOdd=0, countEven=0;
	cin >> s;
	for(i, strlen(s)) {
		a[s[i]-'a']++;
	}
	for(i,27) {
		a[i]%2==0? (a[i]!=0? countEven++ : i=i) : countOdd++;
	}
	
	if (countOdd <= 1 || countOdd % 2 == 1) {
        cout << "First";
    } else {
        cout << "Second";
    }
		
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
#define lld  long long int
#define loop(x,n) for(int x = 0; x < n; x++)
		
using namespace std;

int main(){
	string h,s;
	int n[28]={0},c[28]={0};
	int n2[28]={0},c2[28]={0};
	getline(cin,h);
	getline(cin,s);
	loop(i, h.length()){
		if(h[i] == ' '){
			continue;
		}
		if(h[i]>='a'){
			n[h[i]-'a']++;
		}
		else{
			c[h[i]-'A']++;
		}
	}
	loop(i, s.length()){
		if(s[i] == ' ') {
			continue;
		}
		if(s[i]>='a'){
			n2[s[i]-'a']++;
		}
		else{
			c2[s[i]-'A']++;
		}
	}
	
	loop(i, s.length()){
		if(s[i] == ' ') {
			continue;
		}
		if(s[i]>='a'){
			if(n[s[i]-'a'] >= n2[s[i]-'a']){
				// do nothing
			}
			else{
				cout << "NO" << endl;
				return 0;
			}
			
		}
		else{
			if(c[s[i]-'A'] >= c2[s[i]-'A']){
				// do nothing
			}
			else{
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	
	cout << "YES" << endl;
		


}

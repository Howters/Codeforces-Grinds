#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define lld  long long int
#define for(x,n) for(int x = 0; x < n; x++)
		
using namespace std;

lld MAX_VAL = 100005;

int main(){
	lld n;
	cin >> n;
	lld m[n+1], ans[MAX_VAL][3] , count = 0;
	for(i,MAX_VAL){
		ans[i][0] = -1;
		ans[i][1] =  0;
		ans[i][2] = -1;
	}
	for(i,n){
		cin >> m[i];
		if(ans[m[i]][0] == -1){
			ans[m[i]][0] = i;	
			ans[m[i]][1] = 0;
			ans[m[i]][2] = -1;
			count++;
		}
		else{		
			if(ans[m[i]][1] == 0){
				ans[m[i]][0] = i - ans[m[i]][0];
				ans[m[i]][1] = 1;
				ans[m[i]][2] = i;
			}
			else if(ans[m[i]][0] != (i - ans[m[i]][2]) && ans[m[i]][1] == 1){
				count--;
				ans[m[i]][1] = -2;
			}
			else if(ans[m[i]][1] != -2){
				ans[m[i]][2] = i;
			}
		}
	}
	cout << count << endl;
	if(count > 0){	
		for(i,MAX_VAL){
			if(ans[i][0] != -1 && ans[i][1]!=-2){
				if(ans[i][1] == 0 && ans[m[i]][1] !=-2) {
					cout << i << " " << ans[i][1] << endl;
				}
				else if(ans[i][1]==0){
					cout << i << " " << ans[i][1] << endl;
				}
				else if (ans[i][1] == -1){
					cout << i << " " << 0 << endl;
				}
				else if(ans[i][1] !=0){
					cout << i << " " << ans[i][0] << endl;
				}
			}
		}
	}	
}
		


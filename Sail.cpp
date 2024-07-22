#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
#define lld  long long int
#define for(x,n) for(int x = 0; x < n; x++)
		
using namespace std;

int main(){
	lld t, x, y, ex, ey, countUp =0,countDown=0,countLeft=0,countRight=0,ans=0;
	cin >> t >> x >> y >> ex >> ey;
	ex-x > 0 ? countRight = ex-x : countLeft = x-ex;
	ey-y > 0 ? countUp = ey-y : countDown = y-ey;
//	cout << countUp <<  countDown << countLeft << countRight << endl;
	char s;
	for(i,t){
		cin >> s;
		if(s == 'S' && countDown > 0){
			y = y-1;
			countDown--;
		}
		else if(s == 'N' && countUp > 0){
			y = y+1;
			countUp--;
		}
		else if(s == 'E' && countRight > 0){
			x = x+1;
			countRight--;
		}
		else if(s == 'W' && countLeft > 0){
			x = x-1;
			countLeft--;
		}
		ans++;
		if(x == ex && y == ey){
			cout << ans << endl;
			return 0;
		}
	}
	cout << -1 << endl;	
}

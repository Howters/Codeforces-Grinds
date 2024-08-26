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
    lld ns;
    cin >> ns;
    lld count = 0;
    for(lld n = 1; n <= ns; n++){
    	for(lld m = n+1 ; m <= ns; m++){
    			lld a,c,csq;
	    		csq = m*m + n*n;
	    		c = sqrt(m*m + n*n);
	    		if(csq == c*c && c <=ns){
	    			count++;
				}
		}
	}
	cout << count << endl;
}

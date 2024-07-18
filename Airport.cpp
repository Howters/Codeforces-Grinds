			#include <iostream>
		#include <vector>
		#include <algorithm>
		#include <map>
		#include <string.h>
		#define lld  long long int
		#define for(x,n) for(int x = 0; x < n; x++)
		
		using namespace std;
		
		
		
		int main() {
				
			int n,m;
			cin >> n >> m;
			int arr[m+1];
			int arrs[m+1];
			int maxarr=0;
			int sum = 0;
			for(i,m){
				cin >> arr[i];
				arrs[i]=arr[i];
				sum+=arr[i];
			}
			int max=0,min=0;
			int p = n;
	//		if(sum == n){
	//			max = min = sum;
	//			cout << max+1 << " " << min+1 <<endl;
	//			return 0;
	//	 	}	
		 	sort(&arr[0],&arr[m],greater<int>());
		 	sort(&arrs[0],&arrs[m]);
		 	
		 	int flag = 0;
		 	while(n>0){
	//	 		cout << n << endl;
					for(i,m){
						if(arr[i]>=maxarr){
						maxarr = arr[i];
					}
				}
		 		if(arr[flag] > 0 && arr[flag] == maxarr){
		 			max+=arr[flag];
		 			arr[flag]--;
		 			n--;
		 			maxarr--;
		 			if(flag == m-1){
		 				flag = 0;
					 }
				 }
				 else{
				 	if(flag == m-1){
		 				flag = 0;
					 }
					 else{
				 		flag++;
					 }
				 }
			 }
			 
			 flag = 0;
			 while(p>0){
	//		 	cout << n << endl;
		 		if(arrs[flag] > 0){
		 			min+=arrs[flag];
		 			arrs[flag]--;
		 			p--;
				 }
				 if(flag == m-1){
		 				flag = 0;
					 }
					 else if (arrs[flag] <=0){
					 	flag++;
					 }
			 }
			 
			 cout << max << " " << min <<endl;
			
		}
		


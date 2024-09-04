#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>
#define lld long long int
#define loop(x,n) for(int x = 0; x < n; x++)
using namespace std;


bool compareFirstColumn(vector<lld>& a, const std::vector<lld>& b) {
    return a[0] < b[0];
}

int main() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    lld n;
    inFile >> n;
    
    vector<vector<lld>> arr(n*2, vector<lld>(2));
    lld count = 1;

	for(lld i = 0; i < n*2; i++) {
	    inFile >> arr[i][0];
	    arr[i][1] = i+1;
	}
	
	sort(arr.begin(), arr.end(), compareFirstColumn);
	
//	for(lld i = 0; i < n*2; i++) {
//	    cout << arr[i][0] << " " << arr[i][1] << endl;
//	}
//	
	for(lld i = 1 ; i < n*2 ; i++){
   		if(arr[i][0] != arr[i-1][0]){
   			if(count %2 == 1){
	   			outFile.close();
	            outFile.open("output.txt", ofstream::out | ofstream::trunc);
	            
	            outFile << -1;
	            
	            outFile.close();
	            inFile.close();
	            return 0; 
			}
		}
		else{
			count++;
			if(count == 2){
				outFile << arr[i][1] << " " << arr[i-1][1] <<endl;
				count =1;
				i++;
			}
		}
	}
    
    

    inFile.close();
    outFile.close();
    return 0;
}

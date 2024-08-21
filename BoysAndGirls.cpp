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

int main() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    int b, g;
    inFile >> b >> g;
    int tot = b + g;
    
    if(b >= g){
        loop(i,tot){
            if((i%2==0 && b > 0) || (i%2==1 && b>0 && g<=0)){
                outFile << "B";
                b--;
            }
            else if(i%2==1 && g > 0) {
                outFile << "G";
                g--;
            }
        }
    }
    else if(b < g){
        loop(i,tot){
            if((i%2==0 && g > 0) || (i%2==1 && g>0 && b<=0)){
                outFile << "G";
                g--;
            }
            else if(i%2==1 && b > 0) {
                outFile << "B";
                b--;
            }
        }
    }

    inFile.close();
    outFile.close();
    return 0;
}

#include <iostream>
#include <vector>
#define lld long long int
using namespace std;

int main() {
    lld n, k;
    cin >> n >> k;
    
    vector<lld> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    lld sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }
    
    lld min_sum = sum;
    lld min_index = 0;
    
    for (int i = k; i < n; i++) {
        sum = sum - arr[i-k] + arr[i];
        if (sum < min_sum) {
            min_sum = sum;
            min_index = i - k + 1;
        }
    }
    
    cout << min_index + 1 << endl;
    return 0;
}

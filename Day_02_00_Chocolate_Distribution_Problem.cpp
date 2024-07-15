#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m){
    // base case
    if(n < m){
        return 0;
    }
        
    sort(a.begin(), a.end());
        
    long long left = 0, right = m-1;
    long long minDiff = LLONG_MAX;  // Use LLONG_MAX instead of LONG_MAX
        
    while(right < n) {
        long long val = a[right] - a[left];
        minDiff = min(minDiff, val);
        left++;
        right++;
    }
    
    return minDiff;
} 

int main() {
    vector<long long> nums(8); // Initialize vector with size 5
    long long len = 8, noOfStudents = 5;

    cout << "Enter the Array Elements: " << endl;
    for (int i = 0; i < len; i++) {
        cin >> nums[i];
    }

    long long minDiff = findMinDiff(nums, len, noOfStudents);
    cout << minDiff << endl;

    return 0;
}



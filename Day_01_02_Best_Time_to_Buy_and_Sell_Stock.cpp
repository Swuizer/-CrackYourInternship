#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
        
    int mini = prices[0];
    int maxProfit = 0;

    for(int i=1; i<prices.size(); i++){
         int cost = prices[i] - mini;
         maxProfit = max(maxProfit ,cost);
         mini = min(mini, prices[i]);
    }

    return maxProfit;
}

int main() {
    vector<int> nums(5); // Initialize vector with size 5
    cout << "Enter the Array Elements: " << endl;
    for (int i = 0; i < 6; i++) {
        cin >> nums[i];
    }

    int maximumProfit = maxProfit(nums);

    cout << maximumProfit << endl;

    return 0;
}



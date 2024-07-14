#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int i=0; // it's refer zeros
    for(int j=0; j<nums.size(); j++){
        if(nums[j] != 0){
            swap(nums[i], nums[j]);
            i++;
        }
    }
}

int main() {
    vector<int> nums(5); // Initialize vector with size 5
    cout << "Enter the Array Elements: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }

    moveZeroes(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < nums.size() - 1) cout << ",";
    }

    return 0;
}


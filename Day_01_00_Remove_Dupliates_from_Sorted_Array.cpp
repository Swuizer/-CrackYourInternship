#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0; // handle empty vector

    int i = 0; // pointer to place unique value
    for (int j = 1; j < nums.size(); j++) {
        if (nums[i] != nums[j]) {
            nums[++i] = nums[j];
        }
    }
    return i + 1;
}

int main() {
    vector<int> nums(5); // Initialize vector with size 5
    cout << "Enter the Array Elements: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }

    int range = removeDuplicates(nums);

    for (int i = 0; i < range; i++) {
        cout << nums[i];
        if (i < range - 1) cout << ",";
    }

    return 0;
}

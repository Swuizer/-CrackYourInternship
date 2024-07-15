#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
   map<int, int> mpp;

   for(int i=0; i<nums.size(); i++){
        if(mpp.find(target - nums[i]) != mpp.end()){
            int first = mpp[target - nums[i]];
            return {first, i};
        }
        mpp[nums[i]] = i;
   }
       
   return {-1, -1};
}

int main() {
    vector<int> nums(4); // Initialize vector with size 5
    int target = 9;

    cout << "Enter the Array Elements: " << endl;
    for (int i = 0; i < 4; i++) {
        cin >> nums[i];
    }

    auto temp = twoSum(nums, target);

    for(int i=0; i<temp.size(); i++){
        cout << temp[i];
        if(i < temp.size() - 1) cout << ",";
    }

    return 0;
}



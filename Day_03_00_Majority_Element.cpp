#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {

    int cnt = 0;
    int el;
    for(int i=0; i<nums.size(); i++){
        if(cnt == 0){
            cnt = 1;
            el = nums[i];
        }
        else if(nums[i] == el){
            cnt++;
        }
        else {
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == el){
            cnt1++;
        }
    }
    if(cnt1 > (nums.size() / 2)){
        return el;
    }
    return -1;
}

int main() {
    
    vector<int> nums(6);

    cout << "Enter array elements:" << endl;
    for(int i=0; i<nums.size(); i++){
        cin >> nums[i];
    }

    int ans = majorityElement(nums);

    cout << ans << endl;

    return 0;
}



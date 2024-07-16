#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    int i=m;
    for(int j=0; j<n; j++){
        nums1[i] = nums2[j];
        i++;
    }

    sort(nums1.begin(), nums1.end());
}

int main() {
    
    vector<int> nums1(6);
    vector<int> nums2(3);
    cout << "Enter the first array number: " << endl;
    for(int i=0; i<3; i++){
        cin >> nums1[i];
    }

    cout << "Enter the second array number: " << endl;
    for(int i=0; i<3; i++){
        cin >> nums2[i];
    }

    merge(nums1, 3, nums2, 3);

    for(int i=0; i<6; i++){
        cout << nums1[i];
        if(i < nums1.size()-1) cout << ",";
    }

    return 0;
}



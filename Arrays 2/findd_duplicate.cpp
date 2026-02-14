// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
 

// Example 1:

// Input: nums = [1,2,3,1]

// Output: true

// Explanation:

// The element 1 occurs at the indices 0 and 3.

// Example 2:

// Input: nums = [1,2,3,4]

// Output: false

// Explanation:

// All elements are distinct.






// 1st approach.
//using unordered set approach.
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool findDuplicate(vector<int>& nums) {
    unordered_set<int> seen;

    for(int x : nums) {
        if(seen.count(x)) {
            return true;
        }
        seen.insert(x);
    }
    return false;
}


int main() {
    vector<int> nums = {2,3,6,2,9};
    if (findDuplicate(nums)) {
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }
    return 0;
}




//2nd approach.
//using sorting approach.
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool containsDuplicate(vector<int>& number) {
    sort(number.begin(), number.end());
    for(int i=1; i<number.size(); i++) {
        if(number[i]==number[i-1]) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int>number = {4,6,8,9,3,2,6};
    if(containsDuplicate(number)) {
        cout<<"True"<<endl;
    } else {
        cout<<"False"<<endl;
    }
    return 0;
}
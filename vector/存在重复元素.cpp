#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool result=false;
        int nSize = nums.size();
        for (int i = 0; i < nSize-1; i++) {
            for (int j = i+1; j < nSize; j++)
            {
                if (nums[i] == nums[j]) {
                    return true;
                }
             }
        }
        return false;

    }

};

int main()
{
    vector<int> nums{ 1,2,3,4,1 };
    Solution s;
    bool result=s.containsDuplicate(nums);
    if (result ==1) {
        cout << "true" << endl;
    }
    else{
    cout << "false" << endl;
    }
    return 0;
}
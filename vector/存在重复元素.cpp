/*
题目：
给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。
不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。

说明：
为什么返回数值是整数，但输出的答案是数组呢 ?
请注意，输入数组是以「引用」方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。

输入：nums = [1,1,2]
输出：2, nums = [1,2]
解释：函数应该返回新的长度 2 ，并且原数组 nums 的前两个元素被修改为 1, 2 。不需要考虑数组中超出新长度后面的元素。

注意：
输入：nums=[0]

*/


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
/*
* 给定一个 排序数组 和一个 目标值，在数组中找到目标值，并返回其索引。
* 如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
* 请必须使用时间复杂度为 O(log n) 的算法。
* 
* 示例：
* 输入: nums = [1,3,5,6], target = 5
* 输出: 2
* 
* 输入: nums = [1,3,5,6], target = 7
* 输出: 4
* 
* 输入: nums = [1], target = 0
* 输出: 0
* 
*/

/*
	用二分法
*/

#include<iostream>
using namespace std;
#include<vector>


//暴力求解
class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int j = 0;
		
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] >= target) {
				return j;
			}
			else {
				j++;
			}
		}
		return j;
	}
};

int main() {
	vector<int> v;
	v.push_back(1);
	/*v.push_back(3);
	v.push_back(5);
	v.push_back(6);*/

	int num;
	Solution s;
	num = s.searchInsert(v, 0);
	cout << num << endl;
	system("pause");
	return 0;
}
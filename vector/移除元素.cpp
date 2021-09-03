/*
给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。


说明:
为什么返回数值是整数，但输出的答案是数组呢?
请注意，输入数组是以「引用」方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。

示例：
输入：nums = [3,2,2,3], val = 3
输出：2, nums = [2,2]
解释：函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。你不需要考虑数组中超出新长度后面的元素。
例如，函数返回的新长度为 2 ，而 nums = [2,2,3,3] 或 nums = [2,2,0,0]，也会被视作正确答案。

*/

/*
和存在重复元素的双指针类似——简单题
*/

#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int i;
		int j = 0;
		for (i = 0; i < nums.size();i++) {
			if (nums[i] != val) {
				nums[j] = nums[i];
				j++;
			}
		}
		return j;
	}
};



int main() {

	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(3);
	v.push_back(2);

	int num;
	Solution s;
	num = s.removeElement(v, 3);
	for (int i = 0; i < num; i++) {
		cout << v[i] << " " ;
	}

	system("pause");
	return 0;
}
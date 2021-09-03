/*
给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

示例：
输入：nums = [-2,1,-3,4,-1,2,1,-5,4]
输出：6
解释：连续子数组 [4,-1,2,1] 的和最大，为 6 。

输入：nums = [-1]
输出：-1
*/

#include<iostream>
using namespace std;
#include<vector>
#include "math.h"

//复杂度 O(n)
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int MAX=nums[0];
		int sum=nums[0];
		
		// 数组长度为1时，max=nums[0]
		if (nums.size() < 2) {
			return MAX;
		}

		//数组长度 >=2时
		for (int i = 1; i < nums.size(); i++) {
			sum += nums[i];			//先求和
			if (sum < nums[i]) {	//如何求和项小于当前项，则舍去之前求解的，从当前项开始重新求和
				sum = nums[i];
			}
			//if (sum > MAX) {	//如果求和项 > max , max更新
			//	MAX = sum;
			//}

			MAX = max(MAX, sum);
			
		}
		return MAX;
		
	}
};



// 分而治之
class Solution2 {
public:
	int maxSubArray(vector<int>& nums) {
		int max = nums[0];
		int sum = nums[0];

		// 数组长度为1时，max=nums[0]
		if (nums.size() < 2) {
			return max;
		}
	
	}
};

int main() {
	vector<int> v;
	//特殊例子
	/*v.push_back(1);
	v.push_back(2);*/

	//例子2
	v.push_back(-2);
	v.push_back(1);
	v.push_back(-3);
	v.push_back(4);
	v.push_back(-1);
	v.push_back(2);
	v.push_back(1);
	v.push_back(-5);
	v.push_back(4);
	

	int num;
	Solution s;
	num = s.maxSubArray(v);
	cout << num << endl;
	system("pause");
	return 0;
}
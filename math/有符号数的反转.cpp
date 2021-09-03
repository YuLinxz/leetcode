/*
题目：
给你一个 32 位的有符号整数 x ，返回将 x 中的数字部分反转后的结果。
如果反转后整数超过 32 位的有符号整数的范围 [−2^31,  2^31 − 1] ，就返回 0。
假设环境不允许存储 64 位整数（有符号或无符号）。

示例：
输入：x = 123
输出：321

输入：x = -123
输出：-321

输入：x = 120
输出：21

输入：x = 0
输出：0
*/


#include<iostream>
using namespace std;
#include<vector>
#include "math.h"

//复杂度 O(n)
class Solution {
public:
	int reverse(int x) {
		int min = -pow(2, 31);
		int max = pow(2, 31) - 1;
		if (x<min || x> max) {
			return 0;
		}

		long result = 0;		//返回值	(采用long是因为，如果 result*10 超出int的范围
		int mod= x%10;		//取余数
		int rem=x;		//剩余数
		while (rem != 0) {
			result =result*10+ mod;
			rem = rem / 10;
			mod = rem % 10;
		}

		return result;

	}
};


//简洁版
class solution2 {
public:
	int reverse(int x) {
		long n = 0;
		while (x != 0) {
			n = n * 10 + x % 10;
			x = x / 10;
		}
		return (int)n == n ? (int)n : 0;
	}
};

int main() {
	int a;
	Solution s;
	a = s.reverse(1);
	cout << a << endl;
	
	return 0;

}
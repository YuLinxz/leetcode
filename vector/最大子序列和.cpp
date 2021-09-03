/*
����һ���������� nums ���ҵ�һ���������͵����������飨���������ٰ���һ��Ԫ�أ������������͡�

ʾ����
���룺nums = [-2,1,-3,4,-1,2,1,-5,4]
�����6
���ͣ����������� [4,-1,2,1] �ĺ����Ϊ 6 ��

���룺nums = [-1]
�����-1
*/

#include<iostream>
using namespace std;
#include<vector>
#include "math.h"

//���Ӷ� O(n)
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int MAX=nums[0];
		int sum=nums[0];
		
		// ���鳤��Ϊ1ʱ��max=nums[0]
		if (nums.size() < 2) {
			return MAX;
		}

		//���鳤�� >=2ʱ
		for (int i = 1; i < nums.size(); i++) {
			sum += nums[i];			//�����
			if (sum < nums[i]) {	//��������С�ڵ�ǰ�����ȥ֮ǰ���ģ��ӵ�ǰ�ʼ�������
				sum = nums[i];
			}
			//if (sum > MAX) {	//�������� > max , max����
			//	MAX = sum;
			//}

			MAX = max(MAX, sum);
			
		}
		return MAX;
		
	}
};



// �ֶ���֮
class Solution2 {
public:
	int maxSubArray(vector<int>& nums) {
		int max = nums[0];
		int sum = nums[0];

		// ���鳤��Ϊ1ʱ��max=nums[0]
		if (nums.size() < 2) {
			return max;
		}
	
	}
};

int main() {
	vector<int> v;
	//��������
	/*v.push_back(1);
	v.push_back(2);*/

	//����2
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
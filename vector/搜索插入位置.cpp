/*
* ����һ�� �������� ��һ�� Ŀ��ֵ�����������ҵ�Ŀ��ֵ����������������
* ���Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
* �����ʹ��ʱ�临�Ӷ�Ϊ O(log n) ���㷨��
* 
* ʾ����
* ����: nums = [1,3,5,6], target = 5
* ���: 2
* 
* ����: nums = [1,3,5,6], target = 7
* ���: 4
* 
* ����: nums = [1], target = 0
* ���: 0
* 
*/

/*
	�ö��ַ�
*/

#include<iostream>
using namespace std;
#include<vector>


//�������
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
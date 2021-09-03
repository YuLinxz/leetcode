/*
����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�
��Ҫʹ�ö��������ռ䣬������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣
Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�


˵��:
Ϊʲô������ֵ��������������Ĵ���������?
��ע�⣬�����������ԡ����á���ʽ���ݵģ�����ζ���ں������޸�����������ڵ������ǿɼ��ġ�

ʾ����
���룺nums = [3,2,2,3], val = 3
�����2, nums = [2,2]
���ͣ�����Ӧ�÷����µĳ��� 2, ���� nums �е�ǰ����Ԫ�ؾ�Ϊ 2���㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
���磬�������ص��³���Ϊ 2 ���� nums = [2,2,3,3] �� nums = [2,2,0,0]��Ҳ�ᱻ������ȷ�𰸡�

*/

/*
�ʹ����ظ�Ԫ�ص�˫ָ�����ơ�������
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
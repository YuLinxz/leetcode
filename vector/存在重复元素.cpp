/*
��Ŀ��
����һ���������� nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ֻ����һ�� ������ɾ����������³��ȡ�
��Ҫʹ�ö��������ռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�

˵����
Ϊʲô������ֵ��������������Ĵ��������� ?
��ע�⣬�����������ԡ����á���ʽ���ݵģ�����ζ���ں������޸�����������ڵ������ǿɼ��ġ�

���룺nums = [1,1,2]
�����2, nums = [1,2]
���ͣ�����Ӧ�÷����µĳ��� 2 ������ԭ���� nums ��ǰ����Ԫ�ر��޸�Ϊ 1, 2 ������Ҫ���������г����³��Ⱥ����Ԫ�ء�

ע�⣺
���룺nums=[0]

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
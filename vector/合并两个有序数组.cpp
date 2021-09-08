//���������� �ǵݼ�˳�� ���е��������� nums1 �� nums2�������������� m �� n ���ֱ��ʾ nums1 �� nums2 �е�Ԫ����Ŀ��
//���� �ϲ� nums2 �� nums1 �У�ʹ�ϲ��������ͬ���� �ǵݼ�˳�� ���С�
//ע�⣺���գ��ϲ������鲻Ӧ�ɺ������أ����Ǵ洢������ nums1 �С�Ϊ��Ӧ�����������nums1 �ĳ�ʼ����Ϊ m + n��
// ����ǰ m ��Ԫ�ر�ʾӦ�ϲ���Ԫ�أ��� n ��Ԫ��Ϊ 0 ��Ӧ���ԡ�nums2 �ĳ���Ϊ n ��
//
// ʾ��
// ���룺nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
//�����[1, 2, 2, 3, 5, 6]
//���ͣ���Ҫ�ϲ�[1, 2, 3] ��[2, 5, 6] ��
//�ϲ������[1, 2, 2, 3, 5, 6] ������б��Ӵֱ�ע��Ϊ nums1 �е�Ԫ�ء�
//

//��û�����

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


//�ٷ���
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        for (int i = 0; i != n; ++i) {
            nums1[m + i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());      

    }
};






int main() {
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(0);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(5);
    v2.push_back(6);

    Solution s1;
    s1.merge(v1, 3, v2, 3);
    
    int nSize = size(v1);
    for (int i = 0; i < nSize; i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
